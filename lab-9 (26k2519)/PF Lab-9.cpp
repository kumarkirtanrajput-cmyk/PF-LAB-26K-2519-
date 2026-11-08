#include<stdio.h>
float calculateDiscount(char membership , float amount)
    {
	float rate;
	if(membership=='P'|| membership=='p'){
		rate=20;
	}
	else if (membership=='G' || membership=='g')
	{
		rate=10;
	}
	else if(membership=='S' || membership=='s'){
		rate=5;
	}
	else{
		rate=0;
	}
	if (amount>10000){
		rate=rate+2;
	}
	
	return(amount*rate)/100;
    }
    float calculateFinalBill(float discountedAmount){
	float tax, shipping,finalBill;
	tax=discountedAmount*0.15;
	if(discountedAmount<50000) {
		shipping=300;
	}
	else{
		shipping=0;
	}
	finalBill=discountedAmount+tax+shipping;
	return finalBill;
}
 int main(){
    char membership;
    float amount,discount,discountedAmount,finalBill;

	printf("enter membership type (P/G/S): ");
	scanf("%c", &membership);
	
	printf("enter shopping amount: ");
	scanf("%f", &amount);
	
	discount=calculateDiscount(membership,amount);
	
	discountedAmount=amount - discount;
	
	finalBill= calculateFinalBill(discountedAmount);
	
	printf("\n Original Shopping Amount: %.2f", amount);
	printf("\n Discount Amount: %.2f", discount);
	printf("\n Discounted Amount: %.2f", discountedAmount);
    printf("\n Final payable bill: %.2f", finalBill);
	
	return 0;
}
    

























