#include<stdio.h>
#include<math.h>
double degrees_to_radians(double deg);
double distance_btw_cities(double l1,double l2,double L1,double L2);
int main()
{
    //l1,l2(latitude)
    //L1,L2(longitude)
    double l1=23.259933,l2=12.9716,L1=77.412613,L2=77.5946,d;
    d=distance_btw_cities(l1,L1,l2,L2);
    printf("Distance Between Saurabh Sir and Prateek Sir:%f km",d);
    
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