#include<stdio.h>
int main(){
	char name[50];
	int accountNumber;
	float withdrawalAccount;
	
	File *fptr;
	
	 printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdrawalAmount);
    
    fptr= fopen("bank_log.txt", "a");
    if (fptr==NULL){
    	printf("Error opening file!");
    	return 1;
	}
	fprintf(fptr, "Customer Name: %s\n", name);
    fprintf(fptr, "Account Number: %d\n", accountNumber);
    fprintf(fptr, "Withdrawal Amount: %.2f\n", withdrawalAmount);
    fprintf(fptr, "--------------------------\n");
    
    fclose(fptr);
    printf("\n transaction detail saved successfully");
    return 0;
	
	
	
	
	
	
	
	
	return 0;
}
