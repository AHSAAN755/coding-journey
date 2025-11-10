//to show pointers
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a no:");
	scanf("%d",&a);
	int* ptr=&a;
	printf("%u\n",ptr);	
	printf("%u\n",&ptr);
	printf("%u\n",*ptr);
	return 0;
}
