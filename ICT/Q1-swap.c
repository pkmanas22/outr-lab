// 1. Write a program that will exchange the values of three variables a, b and c as follows: the variable b will hold value of a, c will hold the value of b and a will hold the value of the variable c.

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);

    printf("Before exchanging :: a = %d, b = %d, and c = %d\n", a, b, c);
    
    int temp;
    temp = a;
    a = c;
    c = b;
    b = temp;

    printf("After exchanging :: a = %d, b = %d, and c = %d\n", a, b, c);

    return 0;
}