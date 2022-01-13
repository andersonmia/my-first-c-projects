#include<stdio.h>

int getMax(int size){
	int max=0;
	for(int i=0;i<size;i++){
		int currentNumber;
		printf("Enter number %d:",i+1);
		scanf("%d",&currentNumber);
		if(currentNumber>max){
			max=currentNumber;
		}
	}
	return max;
}

int main(){
	int size;
	printf("Welcome to this program:\nEnter the size of the collection:");
	scanf("%d",&size);
	printf("The maximum number is %d",getMax(size));
	return 0;
}
