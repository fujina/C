﻿#include<stdio.h>
//test
int main()

{
	int x,y;
	printf("enter x:");
	scanf("%d",&x);
	y=0;				//先假设 x = 0, y = 0
	if(x!=0)
		if(x>0)
			y=1;
		else 
			y=-1;		//否则x<0, y = -1
	printf("x=%d,y=%d\n",x,y);
	return 0;
}
