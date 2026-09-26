#include<stdio.h>
int main(){
	float confidence ,requiretreshold;
	printf("enter confidence %%");
	scanf("%f", &confidence);
	printf("enter your confidence treshold");
	scanf("%f", &requiretreshold);
	if (confidence>=90){
	   printf("Very High\n");
	   }
	else if (confidence>=75) {
		printf("High\n");
	}
	else if (confidence>=50){
		printf("Moderate\n");
	}
	else if (confidence<50){
		printf("Low\n");
	}
	else 
	printf("not much confidence\n");
	if(confidence>=requiretreshold && confidence>=50) {
		printf(" Prediction Accepted\n");
	}
	else
	    printf("prediction rejected\n");
	return 0; 
}
