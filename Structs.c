#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int age;
    char major[50];
    double gpa;
};


int main()
{

    struct Student student1;
    strcpy(student1.name, "Gospel");
    strcpy(student1.major, "Software");
    student1.age = 19;
    student1.gpa = 4.9;

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%s\n", student1.major);
    printf("%f\n", student1.gpa);

    return 0;
}