#include <stdio.h>
#include "globals.h"

int a = 0, b = 0;   //  defined once only
int result = 0;

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int dev(int a, int b){
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

int mod(int a, int b){
    if (b == 0) {
        printf("Error: Modulus by zero\n");
        return 0;
    }
    return a % b;
}

