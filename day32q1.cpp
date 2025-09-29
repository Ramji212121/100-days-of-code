#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int merged[10];  
    int size1 = 5, size2 = 5, i, j;

    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (j = 0; j < size2; j++) {
        merged[i + j] = arr2[j];
    }

    
    printf("Merged Array: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

