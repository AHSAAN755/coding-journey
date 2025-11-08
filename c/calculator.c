#include<stdio.h>
int main()
{
	double n1,n2;
	char operator;
	printf("enter an operator(+,-,*,/,%): ");
	scanf("%c",&operator);
	printf("enter 2 no:");
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
            printf("%d %% %d = %d",(int)n1, (int)n2, (int)n1%(int)n2);
            break;
            
        default:
            printf("error! wrong operator");
            break;
	}
	
	return 0;
}

