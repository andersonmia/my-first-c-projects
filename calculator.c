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
	printf("Enter the first number to be summed:");
	scanf("%d",&a);
	printf("\nEnter the second number to be summed:");
	scanf("%d",&b);
	printf("\nThe sum of the two numbers is:%d",sum(a,b));
	printf("\nEnter the two numbers to be multiplied:");
	scanf("%d,%d",&a,&b);
	printf("\nThe product of the two numbers is:%d",product(a,b));
	printf("\nEnter two numbers to find the difference:");
	scanf("%d,%d",&a,&b);
	printf("\nThe difference of the two numbers is:%d",difference(a,b));
	printf("\nEnter the two numbers to check the quotient:");
	scanf("%d,%d",&a,&b);
	printf("\nThe quotient of the two numbers is:%d",quotient(a,b));
	getch();
	return 0;
	}
