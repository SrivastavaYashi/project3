#include<stdio.h>
#include<math.h>
double find_area(double x1,double x2,double x3,double y1,double y2,double y3);
int main()
{
  double x1=20.077,x2=26.526,x3=23.674,y1=11.598,y2= 90.138,y3=32.579,area_under_A;
  area_under_A=find_area(x1,y1,x2,y2,x3,y3);
  printf("Area to be coloured black: %lf",area_under_A);
  return 0;
}
double find_area(double x1,double y1,double x2,double y2,double x3,double y3)
{
     return abs(0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
}