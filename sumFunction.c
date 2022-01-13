#include<stdio.h>
int addNumbers(int num1, int num2){
	return num1+num2;
}
int main(){
	int a;
	int b;
printf("Enter the first number:");
scanf("%d",&a);
printf("\nEnter the second number:");
scanf("%d",&b);
printf("\nThe sum is:%d",addNumbers(a, b));
}
