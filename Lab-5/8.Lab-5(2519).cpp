#include<stdio.h>
int main() {
	int permission;
	printf("enter permission value:  ");
    printf("%d", &permission);
	
	if(permission & 1){
		printf("View:allowed\n");
	}else{
	    printf("View:not allowed\n");	
	}
    if(permission & 2){
		printf("Training:allowed\n");
	}else{
	    printf("Training:not allowed\n");	
	}
	if(permission & 4){
		printf("Test:allowed\n");
	}else{
	    printf("Test:not allowed\n");	
	}
	if(permission & 8){
		printf("Deployment:allowed\n");
	}else{
	    printf("Deployment:not allowed\n");	
	}
	if((permission & 2) && (permission & 8 )){
		printf("Training and Deployment:allowed\n");
	}else{
	    printf("Training and Deployment:not allowed\n");	
	}
	
	
	
	
	
	
	
	
		
	return 0;
}
