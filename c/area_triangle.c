#include <stdio.h>
int main()
{
	float b,h,area;
	printf("enter values:");
	scanf("%f %f",&b,&h);
	area = 0.5*b*h;
	printf("the area of triangle:%f",area);
	return 0;
}
