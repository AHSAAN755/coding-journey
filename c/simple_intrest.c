#include <stdio.h>
int main()
{
	float principal, rate, time, si,amount;
 	printf(" Enter principal amount:");
	scanf ("%f", & principal);
 	printf("Enter the Rate of Interest:");
	scanf ("%f", & rate);
 	printf ("Enter time (in years): ");
  	scanf ("%f", & time);
	si = (principal* rate*time)/100;
	printf (" Simple Iaterest= %f\n" ,si);
	amount = si + principal;
	printf (" total amount= %f\n" ,amount);
 	return 0;
}

