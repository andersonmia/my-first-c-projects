#include<stdio.h>
int main(void){
	char name[30];
	printf("Enter your name:");
	scanf("%s",&name);
	printf("\nHello,%s",name);
	printf("!\nReady to go?");
	int num;
	printf("\nEnter number to check whether it is even or odd:");
	scanf("%d",&num);
	if(num%2==0){
		printf("\nThe number is even.");
	}else{
		printf("\nThe number is odd.");
	}
	
}
