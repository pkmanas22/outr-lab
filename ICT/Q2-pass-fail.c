// 2. Write a program which reads a set of marks in an examination, count the number of pass marks, number of fail marks, percentage of pass and fail.

#include <stdio.h>
int main() {
    int totalStudent;
    printf("Enter the no of students: ");
    scanf("%d", &totalStudent);

    int passCount = 0, failCount = 0;

    for (int i = 0; i < totalStudent; i++) {
        int mark;
        printf("Enter the mark of student %d : ", i + 1);
        scanf("%d", &mark);

        if (mark >= 40)
            passCount++;
        else
            failCount++;
    }

    printf("Number of pass marks = %d\n", passCount);
    printf("Number of fail marks = %d\n", failCount);

    float passPercentage, failPercentage;

    passPercentage = (passCount / (float)totalStudent) * 100;
    failPercentage = (failCount / (float)totalStudent) * 100;

    printf("Percentage of pass marks = %.2f \n", passPercentage);
    printf("Percentage of fail marks = %.2f \n", failPercentage);
}