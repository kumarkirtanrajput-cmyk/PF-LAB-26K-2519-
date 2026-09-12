#include<stdio.h>
int main (){
	float data , price , basiccost , finalcost , discountamount ;
	float discountrate=0.0;
	
	printf("enter data (used in GB)");
	scanf("%f", &data);
	
	printf("enter price PER GB");
	scanf("%f", &price);
	
	basiccost=data * price;	

	if (data>=200) {
		discountrate=0.15;
	}
	else if (data>=100) {
		discountrate = 0.10;
	}
	else if(data >=50) {
		discountrate=0.05;
	}
	else {
		discountrate=0.0;
	}
	
   
	discountamount = basiccost * discountrate;
	finalcost = basiccost-discountamount;
	

	printf("discount amount = %.2f \n", basiccost*discountrate);
	printf("final cost = %.2f \n", basiccost-discountamount);
	printf("basic cost = %.2f \n", data*price);
	
	return 0;

}
