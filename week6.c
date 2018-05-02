# include<stdio.h>
int main()
{
	int x,y;
	printf("enter x:");
	scanf("%d",&x);
	y=-1;				//先假设 x < 0, y = -1
	if(x!=0)			//如果x 不等于 0
		if(x>0)			//如果 x > 0 , y = 1
			y=1;
		else
			y=0;		//否则 x < 0 ，则y也等于0  这里不符合解题要求
						//如果 x = 0, y 等于前面默认的-1, 不符合解题要求
	printf("x=%d,y=%d\n",x,y);
	return 0;
}
