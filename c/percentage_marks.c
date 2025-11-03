#include<stdio.h>
int main()
{
	int m1,m2,m3,total;
	float per;
	printf("enter 3 marks:");
	scanf("%d %d %d",&m1,&m2,&m3);
	total = m1+m2+m3;
	per = (total*100)/300;
	printf("the percentage is:%f",per);
	return 0;
}
