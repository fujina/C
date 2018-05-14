#include<stdio.h>

void main() {
	int money=1;
	printf("欢迎使用深圳通,请刷卡\n");
	if(money<2) {
		printf("余额不足,请投零钱2元\n");
	} else {
		money=money-2;
		printf("刷卡成功!");
		if(money<10)
			printf("\n余额不足10元,请及时充值\n");
	}
}


