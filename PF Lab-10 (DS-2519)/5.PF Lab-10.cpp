#include<stdio.h>
int main (){
	file *fptr;
	
	int roolNo;
	char name[50];
	float marks;
	
	fptr = fopen ("marks.txt", "r");
	
	if(fptr==NULL){
		printf("Error: File not found!");
		return 1;
	}
	printf("\n-----------------------\n");
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("-------------------------\n");
    
     while (fscanf(fptr, "%d %49s %f", &rollNo, name, &marks) == 3)
    {
        printf("%-10d %-20s %-10.2f\n", rollNo, name, marks);
    }

    printf("--------------------------\n");

    fclose(fptr);
		
	return 0;
}
