#include <stdio.h>
#include <stdlib.h>

int main () 
{

    int age = 35;
    double gpa = 4.5;
    char name[] = "John"; // It can also be called a string 
    char grade = 'A';

    printf("There was a man named %s\n", name);
    printf("he was %d years old.\n", age);
    printf("He really liked the name %s\n", name);
    printf("but did not like being %d.\n", age);
    printf("He got a gpa of : %f and  grade: %c", gpa, grade);

    return 0;
}

/* **** NOTES ****
1. A Variable is a container that stores pieces of data
2. It is mandatory that you give variables descriptive names.
3. The main DataTypes we have are  : (i). Integer[i] - stores integer values.
                                     (ii). Character[char] - stores single characters.
                                     (iii). float/double - stores decimal numbers.

*/