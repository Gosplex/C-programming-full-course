#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age;
    char name[20];
    double gpa;
    char grade;


    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Enter your grade: ");
    scanf("%c", &grade);

    printf("Your name is %s and you are %d years old. You have a GPA of %f with a grade of %c",name,age, gpa, grade);

    return 0;
}


// Scanf is limited when uing string so a better alternative is fgets.