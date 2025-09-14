#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Perfect numbers are positive integers only.\n");
        return 0;
    }
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }
    if (sum == num) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is NOT a Perfect Number.\n", num);
    }

    return 0;
}

