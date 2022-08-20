#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age = 5;
    int *pAge = &age;

    double gpa = 4.2;
    double *pGpa = &gpa;

    char grade = 'A';
    char *aGrade = &grade;


    printf("%p\n", &age);
    printf("%p\n", pAge);

    // Derefrencing a pointer
    printf("%d", *pAge);

    return 0;
}