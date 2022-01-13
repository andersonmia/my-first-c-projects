#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int sum(int num1, int num2){
	return num1+num2;
}
int difference(int num1, int num2){
	if(num1>num2){
		return num1-num2;
	}
  else{
	return num2-num1;
}
}
int product(int num1, int num2){
	return num1*num2;
}
int quotient(int num1, int num2){
	if(num1>num2){
		return num1/num2;
	}
	else{ return num2/num1;
	}

}	
int main(){
	int a;
	int b;
	char operator;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("\nEnter the second number:");
	scanf("%d",&b);
	printf("\nEnter operator:");
	scanf(" %c",&operator);
	if(operator=='+'){
		printf("\nThe sum of the numbers is:%d",sum(a,b));
	}
	
	else if(operator=='-'){
		printf("\nThe difference of the numbers is:%d",difference(a,b));
	}
	
	else if(operator=='*'){
		printf("\nThe product of the numbers is:%d",product(a,b));
	}
	
	else if(operator=='/'){
		printf("\nThe quotient of the numbers is:%d",quotient(a,b));
	}
	else{
		printf("\nInvalid operator!");
	}
	getch();
	return 0;
	}
	

