#include <stdio.h>
int main() {
	float programming , mathematics , AI , attendance;
	float average;
	printf("enter programming marks");
	scanf("%f", &programming);
	
	printf("enter mathematics marks");
	scanf("%f", &mathematics);
	
	printf("enter ai marks");
	scanf("%f", &AI);
	
	printf("enter attendance");
	scanf("%f", &attendance);
	
	if ( programming >=50 && mathematics >=50 && AI>=50 && attendance >=75 )
	{
		printf ("\nstudent is eligible \n");
	}
	average=programming+mathematics+AI/3;
	printf("average is %.2f \n"), average;
	
	if (average >= 80) {
		printf("excellent \n");	
	}
	else if (average >=70) {
	    printf("very good \n");
    }
    else if (average>=60) {
    	printf("good \n");
	}
	else if (average>=50){
		printf("satisfactory \n");
	}
	else if (average<50){
		printf("poor \n");
	}
	else {
		printf("\n student is not eligible \n");
	}
	
	
	
	
	
	
	
	
	
	
	
}
