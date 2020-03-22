#include <stdio.h>
#include <string.h>

static char input[100];

static int getInput()
{
    printf("\n--> ");
    return fgets(input, sizeof(input), stdin) != NULL;
}

static int parseAndExecute()
{
    char *verb = strtok(input, " \n");
    char *noun = strtok(NULL, " \n");

    if (verb != NULL)
    {
        if (strcmp(verb, "quit") == 0)
        {
            return 0;
        }
        else if (strcmp(verb, "look") == 0)
        {
            printf("It's too dark to see.\n");
        }
        else if (strcmp(verb, "go") == 0)
        {
            printf("It's too dark to go anywhere.\n");
        }
        else
        {
            printf("I don't know how to '%s'.\n", verb);
        }
    }
    return 1;
}

int main()
{
    printf("Welcome to CaveMe.\n");
    printf("It's very dark in here.\n");
    while (getInput() && parseAndExecute());

    printf("\n Bye. \n");
    return 0;
}
