
#include<stdio.h> 
#include<math.h> 
int main() 
{ 
int a,b,y,choice; 
float z; 
printf("enter values of a and b:\n"); 
scanf("%d%d",&a,&b); 
printf("enter 1 for addition:\n"); 
printf("enter 2 for subtraction:\n"); 
printf("enter 3 for multiplication:\n"); 
printf("enter 4 for division:\n"); 
printf("enter 5 for power:\n"); 
scanf("%d",&choice); 
switch (choice) 
{ 
case 1: 
printf("addition of %d and %d =%d",a,b,a+b); 
break; 
case 2:printf("subtraction of %d and %d =%d",a,b,a-b); 
break; 
case 3: 
printf("multiplication of %d and %d =%d",a,b,a*b); 
break; 
case 4: 
z=(float)a/b; 
printf("division of %d and %d =%f",a,b,z); 
break; 
case 5: 
y=pow(a,b); 
printf("power = %d",y); 
break; 
default: 
printf("enter valid option"); 
} 
}
