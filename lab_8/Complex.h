//
// Created by Grzegorz on 2017-11-30.
//

#ifndef COMPLEX_H
#define COMPLEX_H
typedef struct Complex_t* ComplexPtr;
typedef struct Complext_t Complex;

ComplexPtr CreateComplex(double Re,double Im);
void DestroyComplex(ComplexPtr number);
void Add(ComplexPtr A,ComplexPtr B);
void Substract(ComplexPtr A,ComplexPtr B);
double Module(ComplexPtr number);
void Print(ComplexPtr number);

#endif //COMPLEX_H
