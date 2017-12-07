#include <stdio.h>
#include "Point.h"
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

struct Point_t
{
    double x,y,z;
};

double RandNumber()
{
    double randomNumb=(rand()%1000)+1;
    return randomNumb;
}

PointPtr * CreateRandomPoints(int count)
{
    static bool initilized=false;
    if(!initilized)
    {
        srand(time(NULL));
        initilized=true;
    }

    PointPtr * points=malloc(sizeof(PointPtr)*count);
    for(int i=0;i<count;++i)
    {
        PointPtr point=CreatePoint(RandNumber(),RandNumber(),RandNumber());

        points[i]=point;
    }
    return points;
}
void DestroyListOfPoints(PointPtr*points,int count)
{
    for(int i=0;i<count;++i)
    {
        free(points[i]);
    }
    free(points);
}


PointPtr CreatePoint(double x,double y,double z)
{
    PointPtr point=malloc(sizeof(struct Point_t));
    point->x=x;
    point->y=y;
    point->z=z;
    return point;
}
PointPtr GetTheClosedToMiddlePoint(const PointPtr *points,int count)
{
    PointPtr *theClosesPoint=NULL;

    PointPtr middle=CreatePoint(0,0,0);

    double distance=DistanceBetween(middle,points[0]);

    theClosesPoint=&points[0];

    for(int i=1;i<count;++i)
    {
        double newDistance=DistanceBetween(middle,points[i]);
        if(newDistance<distance)
        {
            distance=newDistance;
            theClosesPoint=points[i];
        }
    }

    DestroyPoint(middle);
    return theClosesPoint;
}

void DestroyPoint(PointPtr point)
{
    free(point);
}
double DistanceBetween(const PointPtr a,const PointPtr b)
{
    struct Point_t c;

    c.x=((b->x)-(a->x));
    c.y=((b->y)-(a->y));
    c.z=((b->z)-(a->z));

    double result=sqrt((c.x*c.x)+(c.y*c.y)+(c.z*c.z));

    return result;
}

void PrintPoint(const PointPtr point)
{
    printf("(x=%f,y=%f,z=%f)\n",point->x,point->y,point->z);
}
