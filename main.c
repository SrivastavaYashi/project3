#include<stdio.h>
#include "Library.c"
int main()
{
  double angle_at_chowk,x1=20.077,x2=26.526,x3=23.674,y1=11.598,y2= 90.138,y3=32.579,area_under_A,l1=23.259933,l2=12.9716,L1=77.412613,L2=77.5946,d;
  //function to find angle (slopes)
  angle_at_chowk=find_angle(-5.00,-0.66);
  printf("Angle at which two roads meets at 123 Chowk: %lf\n",angle_at_chowk);

  //function to find area of triangle (co-ordinates)
  area_under_A=find_area(20.077,11.598,26.526,90.138,23.674,32.579);
  printf("Area to be coloured black: %lf\n",area_under_A);
 
    //function to find distance between two cities
    d=distance_btw_cities(23.259933,77.412613,12.9716,77.5946);
    printf("Distance Between Saurabh Sir and Prateek Sir:%f km",d);


}