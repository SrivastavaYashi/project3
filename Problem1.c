#include<stdio.h>
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
int main()
{
  double angle_at_chowk,m1=-5.00,m2=-0.66;
 
 angle_at_chowk=find_angle( m1,m2);
 printf("%lf",angle_at_chowk);

}