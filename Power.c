#include<stdio.h>

int Power(int u,int v)//��u��v�η�
{
int sum=u;
int j;
if(v!=0)
if(v==1)
	return u;
else{
	for(j=1;j<v;j++)
		sum=sum*u;
	}
else
	sum=1;
return sum;
}


int main()
{
int u=2,v=8;
int sum ;
sum = Power(u,v);
printf("%d\n",sum);
return sum;
scanf("%d");
}