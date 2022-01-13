#include<stdio.h>
bool answer(int a, int b){
	return a%b==0;
}

int main(){
	int x=8,y=4;
	printf(answer(x,y) ? "Biragabanyika" : "Ntibigabanyika");
	return 0;
}
