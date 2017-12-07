#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Table.h"


int main()
{
       srand(time(NULL));
       int randomSize=rand()%90+11;
       TablePtr table=CreateTable(randomSize);

       InitWithRandomNumbers(table);

       Print(table);

       printf("Table avg:%f\n", Avg(table));

       printf("Index of min el in table %d\n",IndexOfMinElement(table));
       int newSize=rand()%10+11;
       Resize(&table,newSize+randomSize);

       InitRangeWithRandomNumbers(randomSize,randomSize+newSize-1,table);

       Print(table);

       Destroy(table);
}