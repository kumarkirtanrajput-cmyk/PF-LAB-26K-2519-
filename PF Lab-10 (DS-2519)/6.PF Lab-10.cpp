#include<stdio.h>
#include<string.h>

int main (){
	char username[50];
	char password[50];
	
	char savedUsername[50];
	char savedPassword[50];
	
	File *fptr;
	
	printf("Enter Username  ");
	scanf("%49s", username);
	
	printf("Enter Password: ");
	scanf("%49s", password);
	
	fptr = fopen("credentials.txt", "r");
	
	if(fptr==NULL){
		printf("Error opening credentials file!");
        return 1;
	}
	if(fscanf(fptr, "%49s %49s", savedUsername, savedPassword)!=2){
		printf("Invalid credentials file!");
        fclose(fptr);
        return 1;
	}
	if (strcmp(username, savedUsername)==0 &&
	    strcamp(password, savedPassword)==0){
	    	printf("\nAccess Granted!");
		}
	else{
		printf("Access Denied!");
	}
	fclose(fptr);
	return 0;
}

