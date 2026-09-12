#include<stdio.h>
    int main(){
    int a ,b,c ;
    printf("enter three num :  ");
    scanf("%d %d %d", &a , &b , &c);
    if (a==b && b==c) {
    printf("all num are equal and greatest");
	}
    else if(a==b && a>c ){
    	printf("%d and %d are equal and greatest");
	}
	else if (c==b && c>a){
		printf("c and b equal andgreatest");
	}
       return 0;
}
