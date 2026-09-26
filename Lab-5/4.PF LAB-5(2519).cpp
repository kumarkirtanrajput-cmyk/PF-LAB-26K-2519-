#include<stdio.h>
int main(){
	int category , choice;
	printf("\n---Ai Chatbox---\n");
	printf("1.Greeting\n");
    printf("2.Study\n");
    printf("3.Weather\n");
    printf("4.Help\n");
    
    
    switch(category){
    	case 1:
    		printf("\n---Greeting---\n");
    		printf("1.hello\n");
    		printf("2.how are you\n");
    		printf("3.Goodbye\n");
    		printf("enter your choice");
    		scanf("%d", &choice);
    		switch(choice){
    			case 1:
    				printf("Hello!Nice to meet you\n");
    				break;
    			case 2:
				    printf("I am Fine and what about you\n");
				    break;
				case 3:
				     printf("goodbye!have a nice day\n");
					 break;	
				default:
				printf("invalid choice\n");	 	
			}
			break;
		case 2:
    		printf("\n---Study---\n");
    		printf("1.Programing\n");
    		printf("2.Mathematics\n");
    		printf("3.AI\n");
    		printf("enter your choice");
    		scanf("%d", &choice);
    		switch(choice){
    			case 1:
    				printf("Programming is fun\n");
    				break;
    			case 2:
				    printf("Mathematics is Boring\n");
				    break;
				case 3:
				     printf("AI is Future\n");
					 break;			
				default:
				    printf("invalid choice\n");
					}
                    break;	
			case 3:
    		printf("\n---weather---\n");
    		printf("1.today\n");
    		printf("2.tomorrow\n");
    		printf("3.forecast\n");
    		printf("enter your choice");
    		scanf("%d", &choice);
    		switch(choice){
    			case 1:
    				printf("today weather is pleasant\n");
    				break;
    			case 2:
				    printf("Tomorrow weather will be sunny\n");
				    break;
				case 3:
				     printf("forecast never give any indication for rain\n");
					 break;										 
			    default:
			    printf("invalid choice");
			}
			break;
			case 4:
    		printf("\n---Help---\n");
    		printf("1.About Chatbox\n");
    		printf("2.commands\n");
    		printf("3.exit\n");
    		printf("enter your choice");
    		scanf("%d", &choice);
    		switch(choice){
    			case 1:
    				printf("We dont know about chatbox\n");
    				break;
    			case 2:
				    printf("give commands to run the code\n");
				    break;
				case 3:
				     printf("there is a exit\n");
					 break;		
				default:
				    printf("invalid choice");
				}
			
			
	}
	
	return 0;
}
