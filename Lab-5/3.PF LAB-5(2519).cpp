#include<stdio.h>
int main() {
	int category , subcategories;
	printf("\\image classification\\ \n");
	printf("Select category\n");
	printf("1.Animal \n");
	printf("2.Vehicle \n");
	printf("3.Food \n");
	printf("4.human \n");
	printf("Enter your category");
	scanf("%d", &category);

	switch(category) {
		case 1:
			printf("\n---Animal Subcategories---\n");
			printf("1. Cat \n");
		    printf("2. Dog \n");
			printf("3. Bird \n");
			printf("Enter your choice");
			scanf("%d", &subcategories);
			
			switch (subcategories) {
				case 1:
					printf("The Animal is Cat\n");
					break;
				case 2:
				    printf("The Animal is Dog\n");
					break;
				case 3:
				printf("The Animal is Bird\n");
				break;
				default:
				printf("invalid animal subcategories");						
			}
			break;
		case 2:
			printf("\n---Vehicle Categories---\n");
			printf("1. Car\n");
			printf("2. Bus \n");
			printf("3. Bike \n");
			printf("Enter your choice");
			scanf("%d", &subcategories);
		switch(subcategories){
			case 1:
			printf("The Vehicle is Car \n");
			break;
			case 2:
			printf("The Vehicle is Bus");
			break;	
			case 3:
			printf("The Vehicle is Bike");
			break;
			default:
			printf("invalid vehicle subcategories");
		}	
		break;	
		case 3:
			printf("\n---Food Categories---\n");
			printf("1. Pizza\n");
			printf("2. Burger \n");
			printf("3. Biryani \n");
			printf("Enter your choice");
			scanf("%d", &subcategories);
		switch(subcategories){
			case 1:
			printf("The Food is Pizza \n");
			break;
			case 2:
			printf("The Food is Burger");
			break;	
			case 3:
			printf("The Food is Biryani");
			break;
			default:
			printf("invalid food subcategories");
		}	
		break;
		case 4:
			printf("\n---Human Categories---\n");
			printf("1. Male\n");
			printf("2. Female\n");
			printf("3. Child \n");
			printf("Enter your choice");
			scanf("%d", &subcategories);
		switch(subcategories){
			case 1:
			printf("The Person is Male \n");
			break;
			case 2:
			printf("The Person is Female");
			break;	
			case 3:
			printf("The Person is Child");
			break;
			default:
			printf("invalid human subcategories");
		}	
		break;	
		default:
		printf("invalid category");		
		
	}
	 
return 0;
	
	
}
