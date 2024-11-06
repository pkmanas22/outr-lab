// 5. Write a menu based program to find LCM and GCD of a set of numbers

#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int choice, n;

    printf("Menu:\n1. Find GCD\n2. Find LCM\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the number %d : ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];
    switch(choice) {
        case 1: {
            for (int i = 1; i < n; i++) {
                result = findGCD(result, numbers[i]);
            }
            printf("The GCD of the given numbers is: %d\n", result);
            break;
        }
        case 2: {
            for (int i = 1; i < n; i++) {
                result = findLCM(result, numbers[i]);
            }
            printf("The LCM of the given numbers is: %d\n", result);
            break;
        }
        default: printf("Invalid choice!\n");
    }

    return 0;
}
