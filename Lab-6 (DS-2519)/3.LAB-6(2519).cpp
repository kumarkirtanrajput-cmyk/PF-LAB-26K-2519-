#include<stdio.h>
int main (){
	int present , absent;
	int attendance , i;
	
	for(i=1;i<=15;i++){
			
	printf("take the attendance; 1=present,0=absent",i);
	scanf("%d", &attendance);
	
	if(attendance==1){
		present++;
	}
	absent=15-present;
	
	}
	
	printf("Present students = %d\n",present);
	printf("Absent students = %d\n",absent);
	
	return 0;
	
}
