#include <stdio.h>
#include "object.h"
#include "misc.h"

static void moveObject(const char *noun, OBJECT *from, OBJECT *to)
{
    OBJECT *obj = parseObject(noun);
    if (obj == NULL)
    {
        printf("I don't understand what item you mean.\n");
    }
    else if (from != obj->location)
    {
        printf("You can't.\n");
    }
    else if (to == NULL)
    {
        printf("There is nobody here to give that to.\n");
    }
    else
    {
        obj->location = to;
        printf("OK.\n");
    }
}
