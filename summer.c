#include<stdio.h>
int main(void)
{
	int num1;
	int num2;
	printf("Please enter the first number:");
	scanf("%d" ,&num1);
	printf("\nenter the seconds number:");
	scanf("%d",&num2);
	printf("%d",num1+num2);
	printf("\n%d",(num1+num2)/2);
	return 0;}
