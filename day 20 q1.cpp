#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;
    int foundOdd = 0;  

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 
    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) { 
            product *= remainder;
            foundOdd = 1;
        }
        num /= 10;
    }

    if (foundOdd) {
        printf("Product of odd digits of %d = %lld\n", original, product);
    } else {
        printf("No odd digits in %d\n", original);
    }

    return 0;
}

