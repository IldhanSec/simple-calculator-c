#include <stdio.h>
#include <math.h>

// Function math
void addition();
void subtraction();
void multiplication();
void division();
void power();
void squareroot();

int main() {
    int option;
    
    // Initial view
    printf("🖩 SIMPLE CALCULATOR 🖩\n");
    printf("==========================\n");
    
    do {

     // Option   
        printf("\nSelect operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square root\n");
        printf("0. Exit\n");
        printf("Option: ");
        scanf("%d", &option);
        
        switch(option) {  
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 5: power(); break;
            case 6: squareroot(); break;
            case 0: printf("Thank you!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(option != 0);
    
    return 0;
}

void addition() {
    double a, b;
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
}

void subtraction() {
    double a, b;
    printf("Enter the first numbers: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    printf("Result: %.2lf - %.2lf = %.2lf\n", a, b, a - b);
}

void multiplication() {
    double a, b;
    printf("Enter the first numbers: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    printf("Result: %.2lf * %.2lf = %.2lf\n", a, b, a * b);
}

void division() {
    double a, b;
    printf("Enter the first numbers: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    if(b != 0) {
        printf("Result: %.2lf / %.2lf = %.2lf\n", a, b, a / b);
    } else {
        printf("Error: Division by zero!\n");
    }
}

void power() {
    double base, exp;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exp);
    printf("Result: %.2lf ^ %.2lf = %.2lf\n", base, exp, pow(base, exp));
}

void squareroot() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if(num >= 0) {
        printf("Square root of %.2lf = %.2lf\n", num, sqrt(num));
    } else {
        printf("Error: Negative number!\n");
    }
}
