#include <stdio.h>
#include<string.h>
struct date
{
	int date;
	int month;
	int year;
};
struct personal
{
	char name[100];
	struct date dob;
	int salary;
}p[5];

int main(void) 
{
 int i=0,n;
 printf("how many details u want to enter: ");
 scanf("%d",n);
 for(i=0;i<n;i++)
 {
  printf("\n Enter Person Name : ");   		
  scanf("%s",p[i].name);
  printf("\n Enter Person Date of Joining (ddmmyyyy) : ");			
  scanf("%d",p[i].dob);
  printf("\n Enter Person Salary : ");
  scanf("%d",&p[i].salary);
 }
 
 for(i=0;i<n;i++)
 {
  printf("\n Person %d Detail",i+1);
  printf("\n Name   = %s",p[i].name);
  printf("\n DOB   = %d",p[i].dob);
  printf("\n Salary = %d",p[i].salary);
 }
 return 0;
}
