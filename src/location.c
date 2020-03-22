#include <stdio.h>
#include <string.h>

struct location
{
    const char *description;
    const char *tag;
};

locs[] = {
    {"a dark cave", "cave"},
    {"an open field", "field"}
};

#define numOfLocations (sizeof(locs) / sizeof(*locs))

static unsigned locOfPlayer = 0;

void executeLook(const char *noun)
{
    if (noun != NULL && strcmp(noun, "around") == 0)
    {
        printf("You are in %s.\n", locs[locOfPlayer].description);
    }
    else
    {
        printf("I don't understand what you want to see.\n");
    }
}

void executeGo(const char *noun)
{
    unsigned i;
    for (i = 0; i < numOfLocations; i++)
    {
        if (i == locOfPlayer)
        {
            printf("You are already there.\n");
        }
        else
        {
            printf("OK.\n");
            locOfPlayer = i;
            executeLook("around");
        }
        return;
    }
    printf("I don't understand where you want to go.\n");
}
