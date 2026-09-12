#include<stdio.h>
int main(){
	int role, status, security;
	printf("enter your role (1=admin, 2=researcher, 3=student)");
	scanf("%d", &role);
	
	printf("enter your status (1=active , 0=unactive)");
	scanf("%d", &status);
	
	printf("enter your security :  ");
	scanf("%d", &security);
	
	if(status==0){
		printf("access denied");
	}
	else if (role=1) {
		if(security>=3)
		printf(" admin access");
		else
		printf("access denied");
		}
		
	else if (role=2){
		if(security>=2)
		printf("reseacher access ");
		else
		printf("access denied");
	}	
	else if (role=3){
		if (security>=1)
			printf("student access");
		else
			printf("access denied");
		}

	
	return 0;
	
}
