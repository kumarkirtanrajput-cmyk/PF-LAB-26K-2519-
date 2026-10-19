#include<stdio.h>
#include<string.h>

int main (){
	char student_names[3][50];
	int marks[3][3];
	int i,j,sum;
	float average;
	
	for(i=0;i<3;i++) {
	    printf("enter student name %d", i+1);
		scanf(" %[^\n]", student_names[i]);
		 
	    for(j=0;j<3;j++) {
	    	printf("enter marks for subjects %d ", j+1);
	    	scanf("%d", &marks[i][j]);
		} 	 	
	}
	
	printf("%-25s %-10s\n", "stuents names" , "average");
	printf("----------------\n");
	
	for(i=0;i<3;i++){
		sum=0;
		
		for(j=0;j<3;j++){
			sum=sum+marks[i][j];
		}
		average=sum/3.0;
		printf("%-25s %-10s\n", "student_names[i]" , "average");
	}
		
return 0;	
}
    






