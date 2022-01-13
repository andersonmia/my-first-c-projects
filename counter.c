#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int countDigits(int num1){
	int i=0;
	while(num1!=0){
		i++;
		num1/=10;
	}
	return i;
}
int main(){
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("\nThe number of digits in %d is:%d",a,countDigits(a));
}
