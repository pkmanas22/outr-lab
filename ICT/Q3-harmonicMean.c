// 3. Write a program to find the harmonic mean of a set of n numbers.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the total number: ");
    scanf("%d", &n);

    float denominator = 0;

    for (int i = 0; i < n; i++) {
        int num;
        printf("Enter the number %d : ", i + 1);
        scanf("%d", &num);

        denominator += (1.0 / num);
    }

    float hm;
    hm = n / denominator;

    printf("The harmonic mean of the given numbers is %.2f ", hm);
    return 0;
}
