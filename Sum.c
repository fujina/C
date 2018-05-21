#include<stdio.h>

int Sum(int begin,int end, int step)	//计算总和的函数,起始值,结束值,步长
{
	int sum=0;
	int j;
	for(j=begin ; j<=end; )
	{
		sum=sum+j;
		j= j + step;
	}
	return sum;
}


void main()
{
int sum = 0;
sum = Sum(301,800,2);
printf("%d\n",sum);
}