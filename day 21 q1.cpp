#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, temp, place = 1, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;
    if (num >= -9 && num <= 9) {
        printf("Swapped number = %d (no change for single digit)\n", num);
        return 0;
    }

    int isNegative = 0;
    if (num < 0) {
        num = -num;   
        isNegative = 1;
    }

    lastDigit = num % 10;   

    
    temp = num;
    while (temp >= 10) {
        temp = temp / 10;
        place = place * 10;
    }
    firstDigit = temp;
    int middle = num % place;   
    middle = middle / 10;       
    swappedNum = lastDigit * place + middle * 10 + firstDigit;

    if (isNegative) {
        swappedNum = -swappedNum;
    }

    printf("After swapping first and last digit of %d = %d\n", original, swappedNum);

    return 0;
}

