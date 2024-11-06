// 4. Write a program to count the number of digits in an integer.

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int count = 0;

    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    printf("The total number of digits in the given number is %d\n", count);
    
    return 0;
}
