#include <stdio.h>

int main() {
    int arr[100], n, i, j, count = 0, isDistinct;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        isDistinct = 1;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDistinct = 0;
                break;
            }
        }
        if(isDistinct)
            count++;
    }

    printf("Total number of distinct elements = %d\n", count);

    return 0;
}
