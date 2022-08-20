#include <stdio.h>
#include <stdlib.h>

int main()
{

    double num1, num2;
    char opp;

    printf("Enter First Number: ");
    scanf("%lf", &num1);
    printf("Enter Operator: ");
    scanf(" %c", &opp);
    printf("Enter Second Number: ");
    scanf("%lf", &num2);

    if (opp == '+')
    {
        printf("Answer: %f", num1 + num2);
    } else if (opp == '-')
    {
        printf("%f", num1 - num2);
    } else if (opp == '*')
    {
        printf("%f", num1 * num2);
    } else if (opp == '/')
    {
        printf("%f", num1 / num2);
    } else
    {
        printf("Invalid Opeartion");
    }
    
    
    
    
    

    return 0;
}