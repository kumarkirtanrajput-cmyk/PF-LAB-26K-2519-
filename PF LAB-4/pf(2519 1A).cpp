#include<stdio.h>
int main(){
	int obstacle,person,battery;
	
	printf("enter obstacle (1=detected , otherwise 0)" );
	scanf("%d", &obstacle);
	
	printf("enter person (1=detected , otherwise 0)");
	scanf("%d", &person);
	
	printf("enter battery percentage : ");
	scanf("%d", &battery);
	
	
	if (obstacle==1){
	 if(person==1) {
	 printf("emergency stop");
	 } else {
	 printf("change direction");
	 }
	 }else {
	 if (battery<20) {
	 	printf("return to charging station");
	 	} else {
	 	printf("continue moving");
	 }
	 }
	return 0;
}
