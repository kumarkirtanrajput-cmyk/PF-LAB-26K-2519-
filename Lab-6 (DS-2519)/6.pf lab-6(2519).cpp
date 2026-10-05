#include<stdio.h>
int main(){
	int n,digit;
	int even = 0,odd = 0;
	
	printf("enter a number: ");
	scanf("%d ", &n);
	
	while(n>0){
		
	digit=n % 10;
	
	if(digit % 2 == 0)
     	even++;
	else
	    odd++;
	
	n=n/10;
	}
	
	printf("Even digit = %d\n ", even);
	
	printf("odd digit = %d\n", odd);
	
	return 0;
}
