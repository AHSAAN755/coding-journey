#include<stdio.h>
int main()
{
	int n,n1,r,sum=0;
	long long re=0;
	printf("enter a positive number:");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		r = n%10;
		sum = sum + r;
		re = re * 10 + r;
		n /= 10;
	}
	printf("sum of digits is %d \n",sum);
	if(n1==re)
	{
		printf("%d is a palindrome",n1);
	}else{
		printf("%d is not a palindrome",n1);		
	}
}
