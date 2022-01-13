#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
char name[50];
int age;
double gpa;
char major[50];
};

int main(void){
struct Student student1;
student1.age=21;
student1.gpa=5;
strcpy(student1.name,"Mia");
printf("The name of the student is %s",student1.name);
printf("\nThe gpa is:%f",student1.gpa);
strcpy(student1.major,"CST");
printf("\nThe major is:%s",student1.major);

return 0;
}


