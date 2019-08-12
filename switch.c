#include<stdio.h>
int main()
{
char grade;
printf("enter the grade");
scanf("%c",grade);
switch(grade)
{
case 'A':
  printf("Excellent");
  break;
case 'B':
  printf("Good");
  break;
default:
  printf("Invalid grade");
}
return 0;
}
