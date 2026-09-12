#include <stdio.h>
int main(){
	int total,missing,duplicate ;
	float missingpercentage, duplicatepercentage;
	
	printf("enter total records");
	scanf("%d", &total);
	
	printf("enter missing record");
	scanf("%d", &missing);
	
	printf("enter duplicate record");
	scanf("%d", &duplicate);
	
	
	if(total<=0) {
		printf("invalid dataset");
	}
	else{
		missingpercentage=missing*100/total;
		duplicatepercentage=duplicate*100/total;
		
		if(missingpercentage>30){
			printf("poor quality datest");
		}
		else if (duplicatepercentage>20){
			printf("dataset require cleaning");
		}
		else{
			printf("dtaset ready for training");
		}
		
		return 0;
		
	}
	
	
	
	
	
}
