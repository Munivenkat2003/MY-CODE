// C program to find username is valid or not

#include<stdio.h>
#include<string.h>
main()
{
 char user1[30],user2[30];
 printf("Enter The user name : ");
 gets(user1);
 printf("Renter the user name : ");
 gets(user2);
 if(strcmp(user1,user2)==0){
 printf("User name is Valid");
 }
 else{
 printf("user name is invalid");
 }
}
