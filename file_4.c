#include<stdio.h>
#include<stdlib.h>
int main()
{
    int thr,ov,i=1,ohr;
    while(i<=10)
    {
      printf("\nENTER NUMBER OF HOURS WORKED BY %d EMPLOY:\n",i);  
        scanf("%d",&thr);
        if(thr>40)
        {
         ohr=thr-40;
         printf("NUMBER OF HOURS OVER WORKED IS:%d HOURS",ohr);
         ov=ohr*12;
         printf("\nOVERTIME PAY FOR THE EMPLOYEE:%d RUPEES",ov);
         
            
        }
        else
        {
           printf("\nSORRY!!BUT THE EMPLOY HAS NOT OVERWORKED.");
            
        }
     ++i;  
     printf("\nvalue of i is :%d",i);
    }
    return 0;
}