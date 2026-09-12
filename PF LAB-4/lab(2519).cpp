#include <stdio.h>
int main(){
	int score;
	printf("enter confidence score");
	scanf("%d", &score); 
	
	if(score<0 && score>100) {
		printf("invalid score");
	}
	else if (score >0 && score<49) {
		printf("low confidence");
	}
	else if(score>50 && score<79){
		printf("moderate confidence");
	}
	else (score>80 && score<100);{
		printf("high confidence");
	}
	
	return 0;
	
	
}
