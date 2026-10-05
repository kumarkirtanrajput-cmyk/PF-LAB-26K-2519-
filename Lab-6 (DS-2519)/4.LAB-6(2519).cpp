#include<stdio.h>
int main(){
	int n,remainder,original,reverse=0;
	printf("enter the number");
	scanf("%d", &n);
	
	original=n;
	
	while(n!=0){
		remainder=n%10;
		reverse=reverse*10+remainder;
		n=n/10;
	}
	if(original==reverse){
		printf("palindrome\n");
	}
	else{
		printf("non-palindrome\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
