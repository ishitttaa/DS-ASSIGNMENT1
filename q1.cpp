#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int arr[MAX], n = 0;

void create() {
    int i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void display() {
    int i;
    if(n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert() {
    int pos, val, i;
    printf("Enter position and value: ");
    scanf("%d %d", &pos, &val);
    if(pos < 0 || pos > n) {
        printf("Invalid Position!\n");
        return;
    }
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
}

void delete() {
    int pos, i;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if(pos < 0 || pos >= n) {
        printf("Invalid Position!\n");
        return;
    }
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void linear_search() {
    int key, i, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Element not found!\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n---MENU---\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: delete(); break;
            case 5: linear_search(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
