#include<stdio.h>
void add(int a[10][10],int b[10][10],int r1,int c1)
{
	int i,j;
	printf("\nTHE ADDITION OF MATRICES:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}	
		printf("\n");
	}	
}
void mul(int a[10][10],int b[10][10],int r1,int c1,int c2)
{
	int i,j,k,result[10][10];
	printf("\nTHE MULTIPLICATION OF MATRICES:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			result[i][j]=0;
			for(k=0;k<c1;k++)
			{
				result[i][j]+=a[i][k]+b[k][j];
			}
			printf("%d ",result[i][j]);
		}	
		printf("\n");
	}	
}
int main()
{
	int a[10][10],b[10][10],r1,c1,r2,c2,i,j;
	printf("Enter rows and colums of first matrix");
	scanf("%d %d",&r1,&c1);
	printf("Enter rows and colums of second matrix");
	scanf("%d %d",&r2,&c2);
	printf("Enter the element of first matrix");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("Enter the element of second matrix");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&b[i][j]);
		}	
	}
	if(r1==r2 && c1==c2)
	{
		add(a,b,r1,c1);
	}else{
		printf("error!");
	}
	if(c1==r2)
	{
		mul(a,b,r1,c1,c2);
	}else{
		printf("error!");
	}return 0;
}

