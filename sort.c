/*max.c
*输入三个整数，按大小顺序把它们输出
*/

#include<stdio.h>

int main() {
	int intSort[3];
	printf("请输入三个整数：\n");
	scanf("%d%d%d",&intSort[0],&intSort[1],&intSort[2]);
	
		int temp;
	if(intSort[0]<intSort[1])
		{
			temp=intSort[0];
			intSort[0]=intSort[1];
			intSort[1]=temp;
		}
	if(intSort[0]<intSort[2])
	{
		temp=intSort[0];
		intSort[0]=intSort[2];
		intSort[2]=temp;
	}
	if(intSort[1]<intSort[2])
	{
		temp=intSort[1];
		intSort[1]=intSort[2];
		intSort[2]=temp;
	}
	
	printf("从大到小排序：%d ， %d , %d \n\n", intSort[0],intSort[1],intSort[2]);
	return 0;
}
