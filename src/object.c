#include <stdio.h>
#include "object.h"

OBJECT objs[] = {
    {"a little cave", "cave", NULL, NULL},
    {"an open field", "field", NULL, NULL},
    {"a silver coin", "silver", field, NULL},
    {"a gold coin", "gold", cave, NULL},
    {"a burly guard", "guard", field, NULL},
    {"yourself", "yourself", cave, NULL},
    {"a cave entrance", "entrance", field, cave},
    {"a way out", "out", cave, field}
};
