 #include<stdio.h>
 #include<conio.h>
 int countDigits(num1){
 	int count=0;
    while(num1!=0){
 		count++;
 		num1/=10;
	 }
	 return count;
 }
 int main()
 {
     int number;

     printf("Enter a number: ");
     scanf("%d",&number);

     printf("Number of digits =  %d\n",countDigits(number));
    getch();
     return 0;
 }
