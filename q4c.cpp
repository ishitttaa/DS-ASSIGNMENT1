#include <stdio.h>

int main() {
    int mat[10][10], trans[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    // Transpose logic
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
