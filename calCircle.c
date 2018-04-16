#define PI 3.14159
#include<stdio.h>
#include<math.h>

int main()
{
float r=1.5;
float h=3.0;
float len,circleArea,surface,sphereVol,cylinderVol;
len=2*PI*r;
circleArea=PI*r*r;
surface=4*PI*r*r;
sphereVol=(4/3)*PI*r*r*r;
cylinderVol=circleArea*h;
printf("len of the circle is : %f\n",len);
printf("the area of the circle is : %f\n",circleArea);
printf("the surface of shpere is : %f\n",surface);
printf("the volume of sphere is : %f\n",sphereVol);
printf("the volume of cylinder is : %f\n",cylinderVol);
}
