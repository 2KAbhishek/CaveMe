#include <stdio.h>
#include <string.h>

static char input[100];

static int getInput()
{
    printf("\n--> ");
    return fgets(input, sizeof(input), stdin) != NULL;
}

int main()
{
    printf("Welcome to CaveMe.\n");
    printf("It's very dark in here.\n");

    printf("\n Bye. \n");
    return 0;
}
