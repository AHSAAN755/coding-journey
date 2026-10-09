#include<stdio.h>
static int i=1;
void display(int n){ 
	
	if(n<i)
	return;  
	printf("%d ",n);
	display(n-1);
}
void main(){
	int n;
	scanf("%d",&n);
	display(n);
}
