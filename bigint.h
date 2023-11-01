#ifndef BIGINT_H
#define BIGINT_H

#include <stdio.h>

#define MAX_DIGITS 1000

typedef struct {
    int digits[MAX_DIGITS];
    int size;
} BigInteger;


void initBigInteger(BigInteger *bi, const char *str);


BigInteger addBigInteger(const BigInteger *a, const BigInteger *b);


BigInteger subtractBigInteger(const BigInteger *a, const BigInteger *b);


BigInteger multiplyBigInteger(const BigInteger *a, const BigInteger *b);


BigInteger divideBigInteger(const BigInteger *a, const BigInteger *b);


void printBigInteger(const BigInteger *bi);

#endif 
