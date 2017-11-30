#include <stdio.h>
#include "Point.h"
int main()
{
    PointPtr pointA=CreatePoint(3,3,3);
    PointPtr pointB=CreatePoint(1,1,1);
    PointPtr *randomPoints=CreateRandomPoints(10);

    for(int i=0;i<10;++i)
    {
        PrintPoint(randomPoints[i]);
    }
    PointPtr point=GetTheClosedToMiddlePoint(randomPoints,10);
    PrintPoint(point);
    DestroyListOfPoints(randomPoints,10);
}