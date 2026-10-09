#include<stdio.h>
int  sumofn(int n){ 
	if(n==0)
		return 0;  
	return n+sumofn(n-1);
}
void main(){
	int n;
	scanf("%d",&n);
	printf("sum= %d",sumofn(n));
}
