#include <stdio.h>
int main()
{
	int a=3;
	int b=4;
	int c=5;
	int x,y;
	printf("%d\n",a+b>c && b==c);			// 0
	printf("%d\n",a||b+c && b-c);			// 1
	printf("%d\n",!(a>b) && !c||1);			// 1
	printf("%d\n",!(x=a) && (y=b) && 0);	//	0
	printf("%d\n",!((a+b)+(c-1)) && (b+c/2));// 0
   return 0;
}
