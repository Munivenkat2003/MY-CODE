// C program for structure using strucure

#include<stdio.h>
#include<conio.h>
struct date
{
int day;
int month;
int year;
};
void main()
{
struct date bday;
clrscr();
printf("Enter your date of birth : ");
scanf("%d%d%d",&bday.day,&bday.month,&bday.year);
printf("Your birthday is %d-%d-%d",
bday.day,bday.month,bday.year);
getch();
}
