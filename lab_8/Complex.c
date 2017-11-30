#include <malloc.h>
#include <stdio.h>
#include <math.h>
#include "Complex.h"

struct Complex_t
{
    double Re;
    double Im;
};
ComplexPtr CreateComplex(double Re,double Im)
{
    ComplexPtr number = malloc(sizeof(struct Complex_t));
    number->Re=Re;
    number->Im=Im;
    return number;
}
void DestroyComplex(ComplexPtr number)
{
    free(number);
}
void Add(ComplexPtr A,ComplexPtr B)
{
    A->Re+=B->Re;
    A->Im+=B->Im;
}
double Module(ComplexPtr number)
{
    return sqrt((number->Re*number->Re)+(number->Im*number->Im));
}

void Substract(ComplexPtr A,ComplexPtr B)
{
    A->Re-=B->Re;
    A->Im-=B->Im;
}
void Print(ComplexPtr number)
{
    printf("%f + %fi\n",number->Re,number->Im);
}
