#include<stdio.h>
int main() 
{
	int a;
	printf("enter number:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive",a);
	}
		else if(a<0)
	{
		printf("%d is negitive",a);
	}
	else
	{
		printf("%d is zere(0)",a);	
	}
}
