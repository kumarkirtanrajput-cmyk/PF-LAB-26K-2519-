#include<stdio.h>
int main(){
	float confidence;
	int usertype;
	printf("enter confidence score");
	scanf("%f", &confidence);
	
	printf("enter usertype (1=authorized,2=unauthorized):");
	scanf("%d", &usertype);
	
	if(confidence>=80){
		printf("face recognized");
	}
	else if (confidence>50 && confidence<80){
	    printf("manual verification");
	}
	else if(confidence>=80 && usertype==1){
		printf("access granted");
	}    
    else if (confidence<50 || usertype==2){
    	printf("access denied");
	}
	else
	printf("confidence error");
	
	return 0;
}
