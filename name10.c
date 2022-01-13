#include<stdio.h>
int main(void){
	char name[20];
	printf("Enter your name:");
	scanf("%s",&name);
	printf("\nWelcome,%s",name);
int num;
    printf("\nEnter number ten:");
	scanf("%d",&num);
	if(num==10){
	 printf("\nExcellent work,%s",name);
	}
	else{
		printf("\nSorry %s, Try again!",name);
	}
	return 0;
}
