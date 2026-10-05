#include<stdio.h>
int main(){
	int pin, digit, sum=0;
	
	printf("enter a 4 digit pin");
	scanf("%d", &pin);
	
	while(pin>1){
		digit=pin%10;
		sum+sum+digit;
		pin+pin/10;
	}
	printf("sum of digits = %d\n", sum);
	
	if(sum>10){
		printf("strong pin");
	}
	else {
		printf("weak pin");
	}
	return 0;
}
