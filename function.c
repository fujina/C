/* resolve the function of x and y below in program:

		��x			x<1
y��=	��2x-1		1��x<10
		��3x-11		x��10   
		
*/

#include<stdio.h>

int main(){
	float x=0,y=0;
	printf("Please in put the value of x: \n");
	scanf("%f",&x);
	if(x<1){
			y=x;
		}
	if(x>=10){
		y=3*x-11;
	}
	if(x>=1 && x<10){
		y=2*x-1;
	}
	printf("\nThe result of y is: \t%f\n",y);
	return 0;
}
