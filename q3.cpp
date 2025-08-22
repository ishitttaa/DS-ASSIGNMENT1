#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, expectedSum, actualSum = 0;

    // Missing number in range 1 to n+1
    expectedSum = (n + 1) * (n + 2) / 2;

    for(i = 0; i < n; i++)
        actualSum += arr[i];

    printf("Missing Number is: %d\n", expectedSum - actualSum);

    return 0;
}
