#include <stdio.h>

int main() {
    int n, i, j, flag = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i][i] == a[j][j]) {
                flag = 1; 
                break;
            }
        }
        if(flag == 1)
            break;
    }

    if(flag == 0)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}

