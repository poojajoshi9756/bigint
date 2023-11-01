include<stdio.h>
#include "bigint.h"
#include <string.h>

void initBigInteger(BigInteger *bi, const char *str) {
    int len = strlen(str);
    bi->size = len;
    for (int i = 0; i < len; i++) {
        bi->digits[i] = str[len - i - 1] - '0';
    }
}

BigInteger addBigInteger(const BigInteger *a, const BigInteger *b) {
    BigInteger result;
   
    return result;
}

BigInteger subtractBigInteger(const BigInteger *a, const BigInteger *b) {
    BigInteger result;
    
    return result;
}

BigInteger multiplyBigInteger(const BigInteger *a, const BigInteger *b) {
    BigInteger result;
    
    return result;
}

BigInteger divideBigInteger(const BigInteger *a, const BigInteger *b) {
    BigInteger result;
   
    return result;
}

void printBigInteger(const BigInteger *bi) {
    for (int i = bi->size - 1; i >= 0; i--) {
        printf("%d", bi->digits[i]);
    }
    printf("\n");
}

int main() {
    BigInteger a, b, result;
    char input[100];

    printf("Enter the first big integer: ");
    scanf("%s", input);
    initBigInteger(&a, input);

    printf("Enter the second big integer: ");
    scanf("%s", input);
    initBigInteger(&b, input);

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = addBigInteger(&a, &b);
                printf("Result: ");
                printBigInteger(&result);
                break;
            case 2:
                result = subtractBigInteger(&a, &b);
                printf("Result: ");
                printBigInteger(&result);
                break;
            case 3:
                result = multiplyBigInteger(&a, &b);
                printf("Result: ");
                printBigInteger(&result);
                break;
            case 4:
                result = divideBigInteger(&a, &b);
                printf("Result: ");
                printBigInteger(&result);
                break;
            case 5:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
