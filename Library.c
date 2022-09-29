#include "Library.h"
#include<math.h>
double find_angle(double m1,double m2)
{
   double y,ang;
   double x=(m2-m1)/(1+(m1*m2));
   if(x<0)
   x=(-1*x);
   y=atan(x);
   ang = (y * 180)/3.14;
   return ang;
}
double find_area(double x1,double y1,double x2,double y2,double x3,double y3)
{
     return abs(0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
}
double distance_btw_cities(double l1,double L1,double l2,double L2)
{
    double haversine,dlat,dlong,distance,x;  
    dlat=l1-l2;                   //difference in latitudes
    dlong=L2-L1;                  //difference in latitudes

   dlat=dlat/57.29577951;          //CONVERTING FROM DEGREES TO RADIANS
   dlong=dlong/57.29577951;
   l1=l1/57.29577951; 
   l2=l2/57.29577951; 

   //formulae
   haversine = pow(sin(dlat / 2), 2) + pow(sin(dlong / 2), 2) * cos(l1) * cos(l2);
   x=2*asin(sqrt(haversine));                     // inverse of sin 
   distance=6371*x;

   return distance;
}
