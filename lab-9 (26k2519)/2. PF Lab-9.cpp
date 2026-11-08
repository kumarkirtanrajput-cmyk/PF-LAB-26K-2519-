#include<stdio.h>
void withdraw(float *balance, float amount){
	
	if(amount<= *balance && amount>0){
		*balance=*balance-amount;
		printf("\n Withdrawl Successful!");
	}
	else{
		printf("\nTransaction declined: Insufficient Balance");
	}	
 }
void deposit(float *balance, float amount){
	if(amount>0){
		*balance=*balance+amount;
		printf("Deposit Successful!\n");
		printf("Updated Balance: %.2f", *balance);
	}
	else{
		printf("Invalid deposit amount!");
    }
 }
 int main(){
 	float balance=20000;
 	float amount;
 	int choice;
 	
 	printf("Welcome to ATM\n");
 	printf("\n1. Debit (Withdraw)");
    printf("\n2. Credit (Deposit)");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);
    
    printf("Enter Amount: ");
    scanf("%f", &amount);
    
    switch(choice){
    	case 1:
    		withdraw(&balance,amount);
    		break;
    	case 2:
		    deposit(&balance,amount);
			break;
		default:
		    printf("Invalid Transaction Type!");	
	}
    	printf("\n\n Final Amount Balance: %.2f", balance);
    	return 0;
 }
