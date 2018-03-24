/*max.c
*输入三个整数，程序判断最大值，并输出 
*/

#include<stdio.h>

int maxFun(int threeNumber[3]) { //三整数求最大值的函数 
	int maxInt=0;
	int j;
	for(j = 1; j <= 3; j++) {
		if(threeNumber[j]>maxInt) {
			maxInt=threeNumber[j];
		}
	}
	return maxInt;
}

int main() {
	int maxInt=0;
	int threeNumber[3];
    printf("请输入三个整数：\n");
	scanf("%d%d%d",&threeNumber[0],&threeNumber[1],&threeNumber[2]);
	maxInt=maxFun((int*)threeNumber[3]);
	printf("最大值是：%d \n\n", maxInt);
	return 0;
}

