#include <stdio.h>
#include<string.h>
int main() {
    char binary[65]; 

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int valid = 1;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            valid = 0;
            break;
        }
    }

    if (!valid) {
        printf("Invalid binary number.\n");
        return 1;
    }
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else
            binary[i] = '0';
    }

    printf("1's complement: %s\n", binary);

    return 0;
}

