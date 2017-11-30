//
// Created by Grzegorz on 2017-11-30.
//

#ifndef LAB_8_POINT_H
#define LAB_8_POINT_H
typedef struct Point_t* PointPtr;

PointPtr CreatePoint(double x,double y,double z);
void DestroyPoint(PointPtr point);
double DistanceBetween(const PointPtr a,const PointPtr b);
void PrintPoint(const PointPtr point);
PointPtr GetTheClosedToMiddlePoint(const PointPtr *points,int count);
PointPtr * CreateRandomPoints(int count);
void DestroyListOfPoints(PointPtr*points,int count);
#endif //LAB_8_POINT_H
