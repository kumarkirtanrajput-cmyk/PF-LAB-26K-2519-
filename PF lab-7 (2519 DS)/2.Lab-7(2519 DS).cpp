#include<stdio.h>
int main(){
	char logs[3][30];
	int i,j;
	int uppercase_count = 0;
	
	for( i=0 ; i<3 ; i++){
		printf("enter log entry %d (username , status , timestamp): ", i+1);
		scanf(" %29[^,], %29[^,],%29[^\n]",
		    logs[0], logs[1], logs[2] );
	for(j=0;j<3;j++){
		int k=0;
		while (logs[j][k] !='\0'){
			if(logs[j][k] >='A' && logs[j][k] <='Z'){
				uppercase_count++;
			}
			k++;
	        }	    		    
        }		    		      
    }
	
	printf("Total letter : %d\n", uppercase_count);
	
	return 0;
	
	
}
