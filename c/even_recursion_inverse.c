#include<stdio.h>
void even(int i,int n){ 
	if(i>n)
		return;
	even(i+1,n);  
	if(i%2==0){
		printf("%d ",i);
	}
	
}
void main(){
	int n;
	scanf("%d",&n);
	even(0,n);
}
