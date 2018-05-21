#include<stdio.h>
//enum bool{false, true};   

Primes(int i)		//判断i是否素数，如果是返回1，否则返回0
{
int j;
int p = 1;

for(j=2;j<i;j++)
{
	if(i%j==0)
	{
		p = 0;
		break;
	}
}

return p;
}

main()
{
	int i;
	for(i = 100;i<=200; i++)
		if(Primes(i)==1)
			printf("%d\t",i);

}