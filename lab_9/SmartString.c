#include <stddef.h>
#include <stdlib.h>
#include "SmartString.h"

struct SmartString
{
    int size;

    int capacity;
};

SmartStringPtr CreateSmartString(int capacity) {
    SmartStringPtr smartString=malloc(sizeof(struct SmartString));

    smartString->capacity=capacity;

    smartString->size=0;

    return smartString;
}

void Destroy(SmartStringPtr string)
{
    
    free(string);
};