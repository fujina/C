//8. 给出一百分制成绩，
//要求输出成绩等级'A'、 'B'、 'C'、 'D'、 'E'。
//90分以上为'A'，80~89分为'B'，70~79分为'C'，
//60~69分为'D'，60分以下为'E'。

#include<stdio.h>

int main()
{
int score;
char level;
do{
	printf("Please input your score(0~100): ");
	scanf("%d",&score);
}while(score>100 || score<0);

if(score>=90)
	level = 'A';
if(score<90)
	level = 'B';
if(score<80)
	level = 'C';
if(score<70)
	level = 'D';
if(score<60)
	level = 'E';

printf("your score level is : %c\n" , level);
return 0;

}