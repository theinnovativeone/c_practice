#include<stdio.h>
#include<stdlib.h>
int main()
{
  int A[4][4],B[4][4] ,x,y;
  for(x=0;x<4;x++)
    
    {
        for(y=0;y<4;y++)
        {
            printf("enter element a%d%d=",x+1,y+1);
            scanf("%d",&A[x][y]);
        }
        
        
    }
    
 for(x=0;x<4;x++)   {
     for(y=0;y<4;y++)
     {
         printf("%d",A[x][y]);
     }
 }
 for(x=0;x<4;x++)
 {
  {   for(y=0;y<4;y++)
     B[x][y]=A[y][x];
     
 }}

 printf("transpose=%d",B[x][y]);
     
 
 return 0;
}
