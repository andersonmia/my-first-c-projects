#include <stdio.h>
#include <conio.h>
int main(void){
int num, i=1, count=0;
printf("Enter a number to check whether its prime:");
scanf("%d",&num);
for(i=1;i<=num;i++){
	if(num%i==0)
		count++;
		}
	
	if(count==2){
		printf("\nPrime");
	}
	else{
		printf("\nNot Prime");
	}
getch();
return 0;
}
