//
// Created by Grzegorz Gruszczyk on 07/12/17.
//

#ifndef LAB_9_TABLE_H
#define LAB_9_TABLE_H

typedef struct Table* TablePtr;

TablePtr CreateTable(int size);
//Modifies pointer to table if reallocation was successful
void Resize(TablePtr* table,int newSize);

void InitRangeWithRandomNumbers(int start,int end,TablePtr table);

void InitWithRandomNumbers(TablePtr table);
double Avg(TablePtr table);
int Size(TablePtr table);
int IndexOfMinElement(TablePtr table);
void Print(TablePtr table);
void Destroy(TablePtr table);
#endif //LAB_9_TABLE_H
