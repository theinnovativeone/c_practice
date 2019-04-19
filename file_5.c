#include<stdio.h>
#include<stdlib.h>
int main()
{
 int num,fact=1;
 printf("ENTER THE INTEGER :\n");
 scanf("%d",&num);
 for(;num>0;--num)
  {
  
    fact=fact*num;
    printf("num is:%d",&num);
    
  }  
 printf("THE FACTORIAL OF THE GIVEN NUMBER:%d",fact);
 
  return 0;  
}