#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num, temp, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        remainder = temp % 10;
        sum = sum + factorial(remainder);
        temp = temp / 10;
    }

    if (sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is NOT a Strong Number.\n", num);
    }

    return 0;
}

