#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter operation (+,-,*,/): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch(op) {
        case '+': printf("Result: %d", a+b); break;
        case '-': printf("Result: %d", a-b); break;
        case '*': printf("Result: %d", a*b); break;
        case '/': printf("Result: %.2f", (float)a/b); break;
        default: printf("Invalid operator!");
    }
    return 0;
}