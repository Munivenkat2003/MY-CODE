#include<stdio.h>
int main()
{
	int num;
	int temp;
	printf("Enter the number: ");
	scanf("%d", &num);
	if(num%2==0){
		printf("The given number is even");
	}
	else{
		printf("The given number is odd");
	}
}
