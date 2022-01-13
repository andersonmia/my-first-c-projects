#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	FILE*fpointer=fopen("Mia.txt","w");
	fprintf(fpointer,"My name is Mia.\nI am a girl who strives to make everything work.\nJust to be kind, lemme give you an advice.\nThings never come on a silver platter.\nYou have to work hard to achieve your goals.\nTrust me, it was never easy,\nIt is not easy,\nAnd it will never be easy!\nBut one thing you should know,\nYou are not alone in your predicarment.\nGod is there to help you through!");
  fclose(fpointer);
  return 0;
}
