#include<stdio.h>
int main(){
	char word[100];
	int i, length=0;
	int vowels = 0, consonants = 0;
	int palindrome =1;
	char temp;
	
	printf("enter a word ");
	scanf("%s", word);
	
	printf("\noriginal word: %s", word);
	
	for(i=0;word[i] !='\0';i++){
		length++;
	}
	printf("\nlength = %d", length);
	
	for(i=0; i<length/2;i++){
		temp = word[i];
		word[i] = word[length-1-i];
		word[length-1-i]=temp;
	}
	printf("\n reversed word: %s", word);
	
	
	for(i=0;i<length/2;i++){
		if(word[i] !=word[length-1-i]){
		      palindrome=0;
			  break;	
		}    
}
if(palindrome==1)
    printf("\npalindrome: yes");
else
    printf("\npalindrome: no");       
	
	
for(i=0;i<length;i++){
	if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'|| word[i]=='A' || word[i]=='E' || word[i]=='I'|| word[i]=='O'|| word[i]=='U'){
		vowels++;
	}
    else{
    	consonants++;
	}	
}	

printf("\n vowels= %d", vowels);
printf("\nconsonants=%d", consonants);
		
	return 0;
}
