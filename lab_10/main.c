#include <stdio.h>
#include <stdlib.h>
#include "GenericList.h"

int main() {
    GenericListPtr list=CreateGenericList();
    int a=5,b=6;
    PushBackElement(list,&a);
    PushBackElement(list,&b);
    Print(list);
    int *el=GetElement(list,3);

}