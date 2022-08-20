#include <stdio.h>
#include <stdlib.h>

int main()
{

    int luckyNumbers[] = {2, 4, 6, 8, 10};

    printf("%d\n", luckyNumbers[1]); 

    luckyNumbers[1] = 200; // A particular index of an array can be redeclared.

    printf("%d\n", luckyNumbers[1]);

    return 0;
}

// The index of an array starts at 0.

