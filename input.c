#include<stdio.h>
int main()
{
	int a,b;
	float x,y;
	char c1,c2;
	scanf("a=%d,b=%d",&a,&b);
	scanf("%f %e",&x,&y);
	scanf("%c%c",&c1,&c2);
	printf("a=%d\t\tb=%d\n",a,b);
	printf("%f\t\t%f\n",x,y);
	printf("%c\t%c\n",c1,c2);
	return 0; 
}
