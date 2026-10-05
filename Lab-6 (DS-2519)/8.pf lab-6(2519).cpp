#include<stdio.h>
int main(){
	int arr[20];
	int i, n=8;
	int largest,smallest;
	int search, found = -1;
	int index, newValue;
	int deleteIndex;
	
	printf("enter 8 elements\n");
	
	for (i=0; i<n; i++){
		printf("%d", &arr[i]);
	}
	
	printf("\noriginal array: ");
	
	for (i=0; i<n; i++){
		printf("%d", arr[i]);
	}
	
	largest= arr[0];
	smallest= arr[0];
	
	for(i=1; i<n; i++){
		if(arr[i] > largest){
			largest= arr[i];
		}
		if (arr[i < smallest]){
			smallest=arr[i];
		}
	}
		printf("\nlargest = %d", largest);
		printf("\nsmallest= %d", smallest);
		
		printf("\nenter number to search ");
		scanf("%d", &search);
		
		for(i=0; i<n;i++){
			if(arr[i]==search){
				found=i;
				break;
			}
		}
		if(found!=-1)
		    printf("number found at index %d\n", found);
		else
		    printf("number not foubd\n");    
		    
		    
	printf("enter index for insertion(0 to %d)", n);
	scanf("%d", &index);
	
	printf("enter new number ");
	scanf("%d", &newValue);
		    
    for(i=n; i>index;i--){
    	arr[i]=arr[i-1];
	}		    
		
	arr[index] = newValue;
	n++;
	
	printf("array after insertion ");
	
	for(i=0; i<n; i++){
		printf("%d", arr[i]);
	}
	
	
	printf("\nenter index to delete (0 to %d)", n-1);
	scanf("%d", &deleteIndex);
	
	for(i=deleteIndex;i<n-1;i++){
		arr[i] = arr[i+1];
	}
	n--;
	
	printf("final array ");
	
	for(i=0; i<n;i++){
		
		printf("%d", arr[i]);
	}		
	
	return 0;
}
