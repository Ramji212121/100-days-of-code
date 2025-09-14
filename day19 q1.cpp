#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf, remainder;
    long lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    tempA = a;
    tempB = b;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    hcf = a;
    lcm = (long)(tempA * tempB) / hcf;

    printf("LCM of %d and %d is %ld\n", tempA, tempB, lcm);

    return 0;
}

