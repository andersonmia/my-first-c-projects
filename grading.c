#include <stdio.h>
#include <conio.h>
int main(void){
	char name[20];
	double score;
	char grade1='A';
	char grade2='B';
	char grade3='C';
	char grade4='D';
	char grade5='F';
	printf("Enter your name:");
	scanf("%s",&name);
	printf("\nHello %s!\nPlease enter your test score:",name);
	scanf("%lf",&score);
	if(score>=80){ 
	printf("\nWelldone,%s!\nYou scored grade %c! ",name,grade1);
	}
	else if(score<=79 && score>=70){
        printf("\nGood,%s!\nYou scored grade %c!",name,grade2);
	}
	else if(score<=69 && score>=60){
		printf("\nYou have done a fair job,%s!\nYou scored grade %c!",name,grade3);
	}
	else if(score<=59 && score>=50){
		printf("\nPull up your socks,%s!\nYou scored grade %c!",name,grade4);
	}
	else{
		printf("\nYou have failed,%s!\nYou scored grade %c!",name,grade5);
	}
getch();
return 0;
	
}
