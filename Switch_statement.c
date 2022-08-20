#include <stdio.h>
#include <stdlib.h>

int main()
{

    char grade = 'G';

    switch (grade)
    {
    case 'A':
        printf("Excellent!");
        break;
    case 'B':
        printf("Very Good!");
        break;
    case 'C':
        printf("Good!");
        break;
    case 'D':
        printf("Pass!");
        break;
    case 'E':
        printf("Poor!");
        break;
    case 'F':
        printf("Failed!");
        break;

    default:
        printf("You did not take the test!");
        break;
    }

    return 0;
}