#include<stdio.h>
int main()
{
	double n1,n2;
	char operator;
	printf("give an operator(+,-,*,/,%): ");
	scanf("%c",&operator);
	printf("give me 2 no:");
	scanf("%lf %lf",&n1,&n2);
	switch(operator)
	{
		case '+':
            printf("%.2lf + %.2lf = %.2lf",n1, n2, n1+n2);
            break;
            
        case '-':
            printf("%.2lf - %.2lf = %.2lf",n1, n2, n1-n2);
            break;
            
        case '*':
            printf("%.2lf * %.2lf = %.2lf",n1, n2, n1*n2);
            break;
            
        case '/':
            printf("%.2lf / %.2lf = %.2lf",n1, n2, n1/n2);
            break;
            
        case '%':
            printf("%.2lf %% %.2lf = %.2lf",(int)n1, (int)n2, (int)n1%(int)n2);
            break;
            
        default:
            printf("error, wrong operator");
            break;
	}
	
	return 0;
}
