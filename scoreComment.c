#include<stdio.h>
int main(void){
int num;
printf("Enter your score:");
scanf("%d",&num);
if(num>=80)
{printf("\nCongratulations, You have passed!");
}else
{printf("\nSorry, You have failed!");
}
return 0;
}
