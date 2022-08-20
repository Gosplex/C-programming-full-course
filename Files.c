#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Creating a file
    FILE *fpointer = fopen("employees.txt", "w");
    fprintf(fpointer, "I created this file using C - Files codes.\n I actually love coding.");
    fclose(fpointer);

    // Appending a file
    FILE *fpointer = fopen("employees.txt", "a");
    fprintf(fpointer, "\nAppended this file.");
    fclose(fpointer);

    // Reading a file
    char line[255];
    FILE *fpointer = fopen("employees.txt", "r");
    fgets(line, 255, fpointer);
    printf("%s", line);

    fclose(fpointer);

    return 0;
}

/*  File Mode 

There are several file mode. They are:
1. w - write
r - read
a - append

*/
