#include <time.h>
#include "Table.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

struct Table
{
    int *content;
    int size;
};

static bool _initialized = false;

TablePtr CreateTable(int size)
{
    assert(size>=1);

    TablePtr tablePtr=(TablePtr)malloc(sizeof(struct Table));
    tablePtr->content=(int*)malloc(sizeof(int)*size);
    tablePtr->size=size;
    return tablePtr;
}

int Size(TablePtr table)
{
    return table->size;
}

void Resize(TablePtr* table,int newSize)
{
    assert(newSize>=1);

    TablePtr resizeTable=realloc(*table,newSize);
    if(resizeTable==NULL)
    {
        fprintf(stderr, "Didn't resize table");
        return;
    }
    resizeTable->size=newSize;
    *table=resizeTable;
}

void Print(TablePtr table)
{
    for (int i=0;i<table->size;++i)
    {
        printf("%d ",table->content[i]);
    }
    printf("\n");
}


void InitWithRandomNumbers(TablePtr table)
{
    if (!_initialized)
    {
        srand(time(NULL));
        _initialized = true;
    }

    for (int i = 0; i < table->size; ++i)
    {
        table->content[i] = (rand() % 90) + 11;

    }
}


void InitRangeWithRandomNumbers(int start, int end, TablePtr table)
{
    assert(start>=0&&end<table->size);

    for(int i=start;i<=end;++i)
    {
        table->content[i]=rand()%90+11;
    }

}

void Destroy(TablePtr table)
{

    free(table->content);

    free(table);
}

double Avg(TablePtr table)
{

    double sum=0.0;
    for(int i=0;i<table->size;++i)
    {
           sum+=table->content[i];
    }
    return sum/(double)table->size;
}

int IndexOfMinElement(TablePtr table)
{
    int min=table->content[0];
    int minIndex=0;
    for(int i=1;i<table->size;++i)
    {
        if(table->content[i]<min)
        {
            minIndex=i;
            min=table->content[i];
        }
    }
    return minIndex;
}



