#include <iostream>
using namespace  std;

void maxHeapify(int A[],int n,int i){
int largest=i;
int left=2*i+1;
int right=2*i+2;

if(left<n && A[left]>A[largest])
largest=left;

if(right<n && A[right]>A[largest])
largest=right;

if(largest!=i){
    swap(A[i],A[largest]);
    maxHeapify(A,n,largest);
}
}
void buildMaxHeap(int A[],int n){
 for(int i=n/2-1;i>=0;i--){
    maxHeapify(A,n,i);
 }
}
void IncHeapSort(int A[],int n){
    buildMaxHeap(A,n);
    for(int i=n-1;i>=1;i--){
        swap(A[0],A[i]);
        maxHeapify(A,i,0);
    }
}
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}
int main(){
int A[] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Original array:\n";
    printArray(A, n);

    // Increasing order
    IncHeapSort(A, n);
    cout << "\nHeap Sort (Increasing Order):\n";
    printArray(A, n);
    return 0;
}
