#include<stdio.h>
void main(){
	int n,i,j,x=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i%2!=0)
			printf("%d ",x++);
			else
			printf("%d ",x--);
		}
		x=x+n-i;
		printf("\n");
	}
}
