#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 struct Employee{
 	char name[50];
 	int age;
 	char department[50];
 	char familyStatus[50];
 	int salary;
 };
 int main(){
 	struct Employee employee1;{
 		strcpy(employee1.name,"Jimmy");
 		employee1.age=28;
 		strcpy(employee1.department,"Sales");
 		strcpy(employee1.familyStatus,"Single");
 		employee1.salary=6000;
	 };
	 struct Employee employee2;{
	 	strcpy(employee2.name,"Khadijah");
	 	employee2.age=23;
	 	strcpy(employee2.department,"Marketing");
	 	strcpy(employee2.familyStatus,"Single");
	 	employee2.salary=7800;
	 };
	 printf("The first employee is %s.",employee1.name);
	 printf("\nHe is %d years old and has an experience of 3 years marketing.",employee1.age);
	 printf("\nHe works in the company's %s department.",employee1.department);
	 printf("\nHe is %s and is still searching!",employee1.familyStatus);
	 printf("\nHis salary is %d$ per month as per this moment.\n",employee1.salary);
	 
	 printf("\nThe second employee is %s.",employee2.name);
	 printf("\nShe is %d years old and has an experience of 3 years as a %s strategist.",employee2.age,employee2.department);
	 printf("\nShe works in the company's %s department.",employee2.department);
	 printf("\nShe is %s and is still searching!",employee2.familyStatus);
	 printf("\nHer salary is %d$ per month as per this moment.",employee2.salary);
 }
