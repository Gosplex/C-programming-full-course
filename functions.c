#include <stdio.h>
#include <stdlib.h>

// Function to cube a Number
double cubeNum(double num)
{
    double result = num * num * num;
    return result;
}

int main()
{
    sayHi("Gospel", 19);
    printf("Answer: %f", cubeNum(2.0));

    return 0;
}

// Function to say Hi to a User

void sayHi (char name[], int age)
{
    printf("Hello %s!. You are %d\n", name, age);
}





// Void tells C that the function does not return any output to the user
// If you are creating a function that would return a value, you would have to put it above the fucntion that is calling it
