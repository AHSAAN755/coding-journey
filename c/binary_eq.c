#include<stdio.h>
int main()
{
	int num;
	printf("enter a number(0-255):");
	scanf("%d",&num);
	if(num<0 || num>0)
	{
		printf("ERROR!!");
	}
	printf("Binary Equivalent %d is:",num);
	for(int i=7;i>=0;i--)
	{
		if((num>>i)&1)
		{
		printf("1");
		}else{
		printf("0");			
		}
	}
}
