#include<stdio.h>
void even(int i,int n){ 
	if(i>n)
		return;  
	if(i%2==0){
		printf("%d ",i);
	}
	even(i+1,n);
}
void main(){
	int n;
	scanf("%d",&n);
	even(0,n);
}
