#include <stddef.h>
#include <stdlib.h>
#include "SmartString.h"

struct SmartString
{
    int size;

    char*content;

    int capacity;


};

SmartStringPtr CreateSmartString(int capacity) {
    SmartStringPtr smartString=malloc(sizeof(struct SmartString));

    smartString->capacity=capacity;

    if(capacity>=1)
    {
        smartString->content=malloc(sizeof(char)*capacity);
    }

    smartString->size=0;

    return smartString;
}


void Destroy(SmartStringPtr string)
{

    free(string);
};