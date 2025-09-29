#include <stdio.h>

int main() {
    int n, num, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100]; 
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);
    pos = n;
    for (int i = 0; i < n; i++) {
        if (num < arr[i]) {
            pos = i;
            break;
        }
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

