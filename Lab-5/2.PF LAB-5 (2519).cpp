#include <stdio.h>
int main (){
	int age , creditscore , existingloan;
	float income;
	
	printf("enter age : ");
	scanf("%d", &age);
	
	printf("enter creditscore :");
	scanf("%d", &creditscore);
	
	printf("enter income  :");
	scanf("%f", &income);
	
	printf("existing loan : ? (1=yes,0=no)");
	scanf("%d", &existingloan);
	
	if (age>=21 && income>=100000 && creditscore>=750 && existingloan==0) {
		printf("high approval chance \n");
	}
	else if (age>=21 && income>=75000 && creditscore>=650 && existingloan==1){
		printf("manual review \n");
	}
	else if (age>=21 && income>=50000 && creditscore>=600){
		printf("possibly elligible \n");
	}
	else{
		printf("rejected \n");
	}
	
	return 0;
}
