#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    double x,y,z;
    char name;
} Point;

double DistanceBetween(const Point *a,const Point *b)
{
    Point c;

    c.x=((b->x)-(a->x));
    c.y=((b->y)-(a->y));
    c.z=((b->z)-(a->z));

    return sqrt((c.x*c.x)+(c.y+c.y)+(c.z*c.z));
}
void PrintInfoAbout(const Point *a)
{
    printf("x=%f,y=%f,z=%f\nname:%c\n",a->x,a->y,a->z,a->name);
}

double RandNumber()
{
    double randomNumb=(rand()%1000)+1;
    return randomNumb;
}

Point* GenerateRandomPoints(int count)
{
    Point* points=malloc(sizeof(Point)*count);
    for(int i=0;i<count;++i)
    {
        Point point;
        point.x=RandNumber();
        point.y=RandNumber();
        point.z=RandNumber();
        points[i]=point;
    }
    return points;
}
Point Create(double x,double y,double z,char c)
{
    Point p;
    p.x=x;
    p.y=y;
    p.z=z;
}
const Point* TheClosesMiddlePoint(const Point *points,int count)
{
    Point *theClosesPoint=NULL;

    Point middle=Create(0,0,0,"M");

    double distance=DistanceBetween(&middle,&points[0]);

    theClosesPoint=&points[0];

    for(int i=1;i<count;++i)
    {
        double newDistance=DistanceBetween(&middle,&points[i]);
        if(newDistance<distance)
        {
            distance=newDistance;
            theClosesPoint=&points[i];
        }
    }
    return theClosesPoint;
}

int main()
{
    srand(time(NULL));
//    Point a;
//    a.x=1;
//    a.y=1;
//    a.z=1;
//    a.name='A';
//    Point b;
//    b.x=3;
//    b.y=3;
//    b.z=3;
//    b.name='BB';
//    PrintInfoAbout(&a);
//   printf("%f",DistanceBetween(&a,&b));
    Point *points=GenerateRandomPoints(10);

    for(int i=0;i<10;++i)
    {
        PrintInfoAbout(&points[i]);
    }

    Point *p=TheClosesMiddlePoint(points,10);

    printf("The closes point:\n");

    PrintInfoAbout(p);

    free(points);
}