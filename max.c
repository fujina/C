/*max.c
*�������������������ж����ֵ������� 
*/

#include<stdio.h>

int maxFun(int threeNumber[3]) { //�����������ֵ�ĺ��� 
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
    printf("����������������\n");
	scanf("%d%d%d",&threeNumber[0],&threeNumber[1],&threeNumber[2]);
	maxInt=maxFun((int*)threeNumber[3]);
	printf("���ֵ�ǣ�%d \n\n", maxInt);
	return 0;
}

