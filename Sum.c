#include<stdio.h>

int Sum(int begin,int end, int step)	//�����ܺ͵ĺ���,��ʼֵ,����ֵ,����
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