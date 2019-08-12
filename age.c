#include<stdio.h>
int main()
{
int age;
printf("enter the age");
scanf("%d",age);
if(age<18)
{
printf("minor");
}
else if(age>18 && age<30)
{
printf("major");
}
else
{
printf("adult");
}
return 0;
}
