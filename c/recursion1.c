#include<stdio.h>
void display(int i,int n){   
	if(i>n)
		return;
	printf("%d ",i);
	display(i+1,n);
	printf("%d ",i);
}
void main(){
	int n;
	scanf("%d",&n);
	display(1,n);
}
