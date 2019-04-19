#include<stdio.h>
#include<stdlib.h>
int main()
{
struct reciept
{   char acc_code[6]; 
    char book_name[19];
    char author[19];
    float price;
    int stock;
    int qty;
}; struct reciept prod_no[50];
  struct date{
      int date;
      int month;
      int year;
  };
  struct date da;
  struct customer
  {
    struct date bill_date;  
     char cust_name[25];
     int mob_no;
};
struct customer cust1;
  int access_id;
  int sk;
  char ch;

 printf("WELCOME TO WESTERN PARK SHOPPING CLUB\n");
 do
 {
    printf("*----------------------------------------*\n");
    printf("ENTER ACCESS ID:");
    scanf("%d",&access_id);
    printf("\nENTER SECURITY KEY:");
    scanf("%d",&sk);
    printf("\n**――――――――――――――――――――――――――――――――――――――**\n");
    
    if(access_id==1234)
    {
            if (sk==5678)
            {
          printf("You have successfully logged in.");
            }
        else
        {
            fflush(stdin);
            printf("\n SECURITY KEY IS INCORRECT");
            printf("press a to try again\n");
            scanf("%c",&ch);
        }
    }
    else{
        fflush(stdin);
        printf("\n ACCESS ID IS INCORRECT \n");
        printf("press a to try again");
        scanf("%c",&ch);
    }
    }
  while(ch=='a');
  int choice;
  printf("\n**――――――――――――――――――――――――――――――――――――――**\n");
  printf("\n1---> STOCK ENTRY\n");
  printf("\n2---> BILLING PRODUCTS\n");
  printf("\n3---> LOG OUT\n");
  printf("\n**――――――――――――――――――――――――――――――――――――――**\n");
  printf("\nENTER YOUR CHOICE: \n");
  scanf("%d",&choice);
  int i,n;
  char acc1_code[6];
        int i1;
        float s_pr=0;
        int qty1;
        float pr;
        char chr;
        float t_amt=0;
        float save=0;
        char book[14];
        char aut[14];
        
  switch(choice)
  { 
     case 1:
     printf("\nENTER NUMBER OF ENTRIES:");
     scanf("%d",&n);
     fflush(stdin);
     for(i=0;i<n;i++)
     {   fflush(stdin);
         printf("PRODUCT NO. %d\n",i+1);
         fflush(stdin);
         printf("\nACCESSION CODE:");
         scanf("%s",prod_no[i].acc_code);
         fflush(stdin);
         printf("\nBOOK NAME:");
         scanf("%s",prod_no[i].book_name);
         fflush(stdin);
         printf("\nAUTHOR NAME:");
         scanf("%s",prod_no[i].author);
         fflush(stdin);
         printf("\nPRICE:");
         scanf("%f",&prod_no[i].price);
         fflush(stdin);
         printf("\nin stock available:");
         scanf("%d",&prod_no[i].stock);
         fflush(stdin);
     }
 printf("\n\t\t\t\t***inventory***");
 printf("\n**-----------------------------------------**");
 
 printf("\n**-----------------------------------------**");
 for(i=0;i<n;i++)
 {
     printf("\n%d   %s    %s    %s     %f    %d\n",i+1,prod_no[i].acc_code,prod_no[i].book_name,prod_no[i].author,prod_no[i].price,prod_no[i].stock);
     
 }     
 printf("\n**------------------------------------------**");  
      
    break;
    
    case 2:
    printf("\n\t\t\t\t Bill Generation \t\t\t\t\n");
    printf("\n**-----------------------------------------**");
    printf("\n Customer Details: \n");
    printf("\n Date: \n");
    scanf("%d--%d--%d",&cust1.bill_date.date,&cust1.bill_date.month,&cust1.bill_date.year);
    printf("\n Enter Customer Name: \n");
    scanf("%s", cust1.cust_name);
    printf("\n Enter Mobile Number:\n");
    scanf("%d", &cust1.mob_no);
    printf("\n**-----------------------------------------**");
    printf("\n Product Details: \n");
    int t=0;
    int i1;
    do
    {
        printf("\n Enter Accession Code:\n");
            scanf("%s",acc1_code);
        printf("\n Enter Book Name:\n");
        scanf("%s",book);
        printf("\n Enter Author Name:\n");
        scanf("%s",aut);
        printf("\n Enter Price:\n");
        scanf("%f",&pr);
        printf("\n Enter Quantity: \n");
        scanf("%d",&qty1);
        printf("\n Do you want to add more Rroducts? (Y/N) \n");
        scanf("%c",&chr);
        s_pr+=pr*qty1;
        t_amt=s_pr-(s_pr*0.1);
        save=s_pr-t_amt;
    }
    while(chr == 'Y');
    printf("\n**-----------------------------------------**");
    printf("\n Reciept \n");
    printf("\n**-----------------------------------------**");
    printf("\n Subtotal= %f ",s_pr);
    printf("\n Net Total= %f ",t_amt);
    printf("\n You Save= %f",save);
    printf("\n**-----------------------------------------**");
    printf("\n Thanks for Shopping! Enjoy Saving 10% whenever you shop with us ! \n");
    break;
    
    default:
    printf("\nKindly enter correct option.");
  }   
    return 0;  
 }