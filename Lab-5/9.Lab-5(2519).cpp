#include<stdio.h>
#include<math.h>
int main(){
	int choice;
    double num,base,exponent,result;
    
	printf("\n---AI MATHEMATICAL CALCULATOR---\n");
	printf("1.Square root\n");
	printf("2.Power\n");
	printf("3.Absolute value\n");
	printf("4.Floor\n");
	printf("enter your choice\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("enter your number\n");
			scanf("%lf", &num);
		if(num>=0){
			result=sqrt(num);
			printf("result=%.2lf\n", result);
		}	
		else{
			printf("invalid num\n");
		}
		break;
		case 2:
			printf("enter base\n");
			scanf("%lf", &base);
			
			printf("enter exponent\n");
			scanf("%lf", &exponent);
			
			result=pow(base,exponent);
			printf("Power=%.2lf\n", result);
		break;
		case 3:
		   	printf("enter number\n");
			scanf("%lf", &num);
			
			result=fabs(num);
			printf("Absolute=%.2lf\n", result);
			break;
		case 4:
			printf("enter number\n");
			scanf("%lf", &num);
			
			result=floor(num);
			printf("Floor= %.2lf\n", result);
			
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
