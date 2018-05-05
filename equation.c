#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
double u;
double x,x1,x2;
printf("Please input the number of a,b,c:\n");
scanf("%d,%d,%d",&a,&b,&c);
printf(" The equation is : \n %dx^2 + %dx + %d = 0 \n",a,b,c);
u = b*b*1.0 - 4*a*c;
if(a!=0 && u>=0){
	if(u==0)
	{
		x=(-1*b)/(2*a);
		printf("There have one answer: x = %f \n",x);
	}
	else
	{
		x1=(-1*b+sqrt(u))/(2*a);
		x2=(-1*b-sqrt(u))/(2*a);
		printf("There have two answer: \nx1 = %f\t\tx2 = %f\n",x1,x2);
	}
}
else
	printf("There no answer of this equation.\n");

return 0;
}
