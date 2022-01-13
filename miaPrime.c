#include<stdio.h>
#include<conio.h>
int main(void){
	int num,i,count=0;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=2;i<num;i++){
	  	if(num%i==0){		  
		count++;
	}
	}
	if(count==0){
		printf("\nPrime number.");
	}
	else{
		printf("\nNot prime.");
	}
	getch();
	return 0;
}
