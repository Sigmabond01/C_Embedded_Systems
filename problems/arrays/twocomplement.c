#include <stdio.h>
#include <string.h>

void twosComplement(char binaryNumber[]) {
    int length = strlen(binaryNumber);
    int carry = 1;

    for(int i = length - 1; i >= 0; i--) {
        if(binaryNumber[i] == '0') {
            binaryNumber[i] = '1';
        } else {
            binaryNumber[i] = '0';
        }
    }

    for(int i = length - 1; i >= 0; i--) {
        if(binaryNumber[i] == '0' && carry == 1) {
            binaryNumber[i] = '1';
            carry = 0;
        } else if (binaryNumber[i] == '1' && carry == 1) {
            binaryNumber[i] = '0';
            carry = 1;
        }
    }
    printf("2s complement: %s\n", binaryNumber);
}

int main() {
    char binaryNumber[100];
    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);
    twosComplement(binaryNumber);
}