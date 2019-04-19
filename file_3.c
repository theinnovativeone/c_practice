#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,opay=0,otime,hours;
    for(n=1;n<=10;n++)
    {
       printf("ENTER NUMBER OF HOURS WORKED BY %d EMPLOY:\n ",n) ;
        scanf("%d",&hours);
        if(hours>40)
      {  otime=hours-40;
        opay=otime*12;
        printf("THE OVERTIME PAY OF EMPLOY IS :%d\n",opay);
      }
      else
      {printf("THE EMPLOY HAS NOT OVERWORKED\n");}
    }
    return 0;
}