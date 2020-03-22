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

static unsigned locationOfPlayer = 0;
