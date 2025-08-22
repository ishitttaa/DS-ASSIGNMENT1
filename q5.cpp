#include <stdio.h>

int main() {
    int arr[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Row sums
    for(i = 0; i < r; i++) {
        int rowSum = 0;
        for(j = 0; j < c; j++) {
            rowSum += arr[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    // Column sums
    for(j = 0; j < c; j++) {
        int colSum = 0;
        for(i = 0; i < r; i++) {
            colSum += arr[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
