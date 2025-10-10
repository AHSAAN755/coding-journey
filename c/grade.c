#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	if(marks >= 90)
	{
		printf("Grade:'O' Grade:10  :Outstanding");
	}
	if(marks >= 80 && marks < 90)
	{
		printf("Grade:'A+' Grade:9  :Excellent");
	}
	if(marks >= 70 && marks < 80)
	{
		printf("Grade:'A' Grade:8 :Very Good");
	}
	if(marks >= 60 && marks < 70)
	{
		printf("Grade:'B+' Grade:7  :Good");
	} 
	if(marks >= 50 && marks < 60)
	{
		printf("Grade:'B' Grade:6  :Average");
	} 
	if(marks >= 40 && marks < 50)
	{
		printf("Grade:'C' grade:5 :Excellent");
	}
	if(marks  < 40)
	{
		printf("Grade:'F' Grade:0  :Fail");
	}
	return 0; 
}
