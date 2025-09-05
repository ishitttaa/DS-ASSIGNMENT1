#include <iostream>
using namespace std;

struct Triplet {
    int row, col, val;
};

void display(Triplet a[], int n) {
    cout << "Row\tCol\tVal\n";
    for (int i = 0; i < n; i++)
        cout << a[i].row << "\t" << a[i].col << "\t" << a[i].val << "\n";
}

int transpose(Triplet a[], int n, Triplet result[]) {
    for (int i = 0; i < n; i++) {
        result[i].row = a[i].col;
        result[i].col = a[i].row;
        result[i].val = a[i].val;
    }
    return n;
}

int add(Triplet a[], int n1, Triplet b[], int n2, Triplet result[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i].row == b[j].row && a[i].col == b[j].col) {
            int sum = a[i].val + b[j].val;
            if (sum != 0) result[k++] = {a[i].row, a[i].col, sum};
            i++; j++;
        }
        else if ((a[i].row < b[j].row) ||
                 (a[i].row == b[j].row && a[i].col < b[j].col)) {
            result[k++] = a[i++];
        }
        else {
            result[k++] = b[j++];
        }
    }
    while (i < n1) result[k++] = a[i++];
    while (j < n2) result[k++] = b[j++];
    return k;
}

int multiply(Triplet a[], int n1, Triplet b[], int n2, Triplet result[]) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i].col == b[j].row) {
                int r = a[i].row, c = b[j].col, v = a[i].val * b[j].val;
                bool found = false;
                for (int x = 0; x < k; x++) {
                    if (result[x].row == r && result[x].col == c) {
                        result[x].val += v;
                        found = true;
                        break;
                    }
                }
                if (!found) result[k++] = {r, c, v};
            }
        }
    }
    return k;
}

int main() {
    int n1, n2;
    Triplet A[100], B[100], T[100], C[200], M[200];

    cout << "Enter number of non-zero elements in A: ";
    cin >> n1;
    cout << "Enter row col val for A:\n";
    for (int i = 0; i < n1; i++) cin >> A[i].row >> A[i].col >> A[i].val;

    cout << "\nMatrix A:\n"; display(A, n1);

    int nt = transpose(A, n1, T);
    cout << "\nTranspose of A:\n"; display(T, nt);

    cout << "\nEnter number of non-zero elements in B: ";
    cin >> n2;
    cout << "Enter row col val for B:\n";
    for (int i = 0; i < n2; i++) cin >> B[i].row >> B[i].col >> B[i].val;

    cout << "\nMatrix B:\n"; display(B, n2);

    int na = add(A, n1, B, n2, C);
    cout << "\nA + B:\n"; display(C, na);

    int nm = multiply(A, n1, B, n2, M);
    cout << "\nA * B:\n"; display(M, nm);

    return 0;
}
