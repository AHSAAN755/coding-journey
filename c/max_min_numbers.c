#include<stdio.h>
int main() 
{
	int a,b,c;
	printf("enter values: ");
	scanf("%d %d %d",&a,&b,&c);
	int max = a;
	if(b>max)
	{
		max = b;
	}
	if(c>max)
	{
		max = c;
	}
	int min = a;
	if(b<min)
	{
		min = b;
	}
	if(c<min)
	{
		min = c;
	}
	printf("maximum: %d\n",max);
	printf("minimum: %d\n",min);
	return 0;
}
