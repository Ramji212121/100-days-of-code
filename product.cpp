#include <stdio.h>

int main() {
    int a, b, sum,difference,product;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    difference = a-b;
    printf("difference=%d\n", difference);
    product = a*b;
    printf("product=%d\n", product);
    

    return 0;
}

