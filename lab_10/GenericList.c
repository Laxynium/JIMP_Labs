//
// Created by Grzegorz Gruszczyk on 14/12/17.
//

#include <MacTypes.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "GenericList.h"

struct Node
{
    void * data;
    struct Node * nextNode;
};

struct GenericList
{
    struct Node * begin;

    struct Node * end;

    size_t size;

    DeleteFunc deleteFunc;
};

 GenericListPtr CreateGenericList(DeleteFunc func)
{
    GenericListPtr newList=malloc(sizeof(struct GenericList));
    struct Node*newNode=malloc(sizeof(struct Node));
    newList->begin=newNode;
    newList->end=newNode;
    newList->end->data=NULL;
    newList->deleteFunc=func;
    return newList;
}

void Destroy(GenericListPtr list)
{
    struct Node * itr=list->begin;

    while(itr->nextNode!=NULL)
    {
        struct Node *nodeToDelete=itr;
        itr=itr->nextNode;
        list->deleteFunc(nodeToDelete->data);
        free(nodeToDelete);
    }
    list->deleteFunc(itr->data);
    free(itr);

    free(list);
}

void PushBackElement(GenericListPtr list, void * el)
{
    //When is pushed first element
    if(list->begin->data==NULL)
    {
        list->begin->data=el;
        return;
    }
    struct Node * newNode=malloc(sizeof(struct Node));

    newNode->data=el;
    struct Node*oldEnd=list->end;
    list->end->nextNode=newNode;
    list->end=list->end->nextNode;

}

void *GetElement(GenericListPtr list, int index)
{
    assert(list->begin!=NULL);

    assert(index>=0);

    struct Node * itr=list->begin;
    int k=0;
    while(k<index&&itr->nextNode!=NULL)
    {
        ++k;
        itr=itr->nextNode;
    }
    return itr->data;
}

void Print(GenericListPtr list)
{
    struct Node * itr=list->begin;

    while(itr->nextNode!=NULL)
    {
        printf("%d ",*(int*)(itr->data));
        itr=itr->nextNode;
    }
    printf("%d\n",*(int*)(itr->data));
}

void AddElement(GenericListPtr list, int index, void *el)
{
    struct Node * itr=list->begin;
    int k=0;
    while(k<index-1&&itr->nextNode!=NULL)
    {
        ++k;
        itr=itr->nextNode;
    }
    
}
