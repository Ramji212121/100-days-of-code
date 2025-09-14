#include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    tempA = a;
    tempB = b;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("HCF (GCD) of %d and %d is %d\n", tempA, tempB, a);

    return 0;
}

