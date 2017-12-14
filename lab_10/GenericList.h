//
// Created by Grzegorz Gruszczyk on 14/12/17.
//

#ifndef LAB_10_GENERICLIST_H
#define LAB_10_GENERICLIST_H

typedef struct GenericList*GenericListPtr;

typedef void(*DeleteFunc)(void*elementToDelete);

GenericListPtr CreateGenericList(DeleteFunc func);

///List destroyes also stored elements
void Destroy(GenericListPtr list);


void PushBackElement(GenericListPtr list, void * el);

///If index is out of size returns last element
void* GetElement(GenericListPtr list,int index);

void Print(GenericListPtr list);

#endif //LAB_10_GENERICLIST_H
