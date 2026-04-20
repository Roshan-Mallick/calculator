#include <stdio.h>
#include "globals.h"

int main () {

    int hasInput = 0;
    int choice;

    while (1) {
        printf("\n0.Enter a and b\n1.addition\n2.substract\n3.multiply\n4.devide\n5.modulus\n6.Exit\n");
        printf("Enter choice : ");
        scanf("%d",&choice);

        switch (choice) {

            case 0:
                printf("Enter a : ");
                scanf("%d",&a);
                printf("Enter b : ");
                scanf("%d",&b);
                hasInput = 1;
                break;

            case 1:
                if (!hasInput) { printf("Enter values first!\n"); break; }
                result = add(a,b);
                printf("Addition = %d\n", result);
                break;

            case 2:
                if (!hasInput) { printf("Enter values first!\n"); break; }
                result = sub(a,b);
                printf("Subtraction = %d\n", result);
                break;

            case 3:
                if (!hasInput) { printf("Enter values first!\n"); break; }
                result = mul(a,b);
                printf("Multiplication = %d\n", result);
                break;

            case 4:
                if (!hasInput) { printf("Enter values first!\n"); break; }
                result = dev(a,b);
                printf("Division = %d\n", result);
                break;

            case 5:
                if (!hasInput) { printf("Enter values first!\n"); break; }
                result = mod(a,b);
                printf("Modulus = %d\n", result);
                break;

            case 6:
                printf("Exited\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}

