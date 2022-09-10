// C PROGRAM TO PRINT TO PRINT ALL THE COMPOSITE NUMBERS BETWEEN A & B

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter A=\n");
	scanf("%d",&a);
	printf("Enter B=\n");
	scanf("%d",&b);
	for(int i=a+1;i<b;i++)
	{
		int count=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count!=2)
		{
			printf("%d\n",i);
		}
	}
}
