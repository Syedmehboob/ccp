#include<stdio.h>
#include<string.h>
int main()
{
  int *a,*b,temp=0,x ,y;
  printf("enter the values of x,y: \t");
  scanf("%d%d",&x,&y);
  a=&x;
  b=&y;
  printf("Before swapping pointers value \t a= %d\tb= %d andx = %d\t y = %d ",*a,*b,x,y);
  temp=*a;
  *a=*b;
  *b=temp;
  printf("\nafter swapping pointers value \ta = %d\tb= %d andx = %d\t y = %d \n",*a,*b,x,y);
  return 0;

}
