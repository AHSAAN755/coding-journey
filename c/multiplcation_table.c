#include<stdio.h>
int main()
{
	int a;
	printf("the multiplication table of :");
	scanf("%d",&a);
	for(int i =1;i<=10;i++)
	{
		printf("%d * %d = %d\n",a,i,a*i);
	}
}
