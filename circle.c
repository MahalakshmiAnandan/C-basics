#include<stdio.h>
#define PI 3.14
int main()
{
  int r,area,cir;
  printf("enter the radius");
  scanf("%d",&r);
  area=PI*r*r;
  cir=2*PI*r;
  printf("area is %d",area);
  printf("\ncircumference is %d",cir);
  
}
