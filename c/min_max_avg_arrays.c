#include <stdio.h>
int main()
{
	int n,max,min;
	int a[100];
	float sum=0,avg;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min = max = a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
		if(a[i]<min)
		{
			min = a[i];
		}
		sum += a[i];
	}
	avg = sum/n;
	printf("max = %d\n",max);
	printf("min = %d\n",min);
	printf("avg = %.2f\n",avg);
	
}

