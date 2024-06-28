                      //BANK MANGEMENT SYSTEM
#include<stdio.h>
int main()
{ 
  int date,account,age,amount,press,deposite,choice,withdraw;
  char name[18],address[60],contact[10],aadhar[20];
    printf("enter the date: \n");
    scanf("%d",&date);
    printf("enter the account no.: \n");
    scanf("%d",&account);
    printf("enter the name: \n");
    scanf("%s",&name);
    printf("enter the age: \n");
    scanf("%d",&age);
    printf("enter the address: \n");
    scanf("%s",&address);
    printf("enter the aadhar no.: \n");
    scanf("%s",&aadhar);
    printf("enter the contact: \n");
    scanf("%s",&contact);
    printf("enter the deposite amount: \n");
    scanf("%d",&amount);

    printf("info you want to change enter the account no.: \n");
    scanf("%d",&account);

    //use of switch for changing address and contact number 

printf("enter your choice : ");
scanf("%d",&choice);
    switch (choice)
    {
    case 1 : printf("for changing address\n");
                           break;

    case 2 : printf("for changing contact\n");
                           break;                       
        default : printf("not a valid \n"); 
    }

   printf("the change has been saved! thank you\n");

   printf("enter the account no of the customer: \n");
   scanf("%d",&account);

//for deposite or withdraw
printf("enter the choice\n");
scanf("%d",&choice);

switch (choice)
    {
    case 1 : printf("deposite\n");
            printf("enter the amount you want to depositen\n");
                scanf("%d",&amount);
if (deposite)
{
  printf("deposite successfully\n");
}

                           break;

    case 2 : printf("withdraw\n");
             printf("enter the amount you want to withdraw\n");
                  scanf("%d",&amount);
if (withdraw)
{
    printf("withdraw successfully\n");
}

                         break;                       
        default : printf("not a valid \n"); 
    }
        
printf("do you want to check by: \n");
    printf("enter the choice\n");
scanf("%d",&choice);

switch (choice)
    {
    case 1 : printf("account no\n");
            printf("enter the account no\n");
                scanf("%d",&amount);
                break;
    

    case 2 : printf("name\n");
             printf("enter the name: \n");
             scanf("%d",&name);
                  break;
    }
  


   return 0;
}