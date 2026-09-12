#include<stdio.h>
int main(){
	int latency , approvalstatus;
	float accuracy;
	
	printf("enter model accuracy");
	scanf("%f", &accuracy);
	
	printf("enter prediction latency"),
	scanf("%d", &latency);
	
	printf("enter approval status (1=approved, 0=not approved)");
	scanf("%d", &approvalstatus);
	
	if(accuracy<90){
		printf("accuracy too low");
	}
	else if(latency>100){
		printf("latency too high");
	}
	else if (approvalstatus== 0) 
	{
		printf("model not approved");
	}
	else
	printf("model is approveed");
}
