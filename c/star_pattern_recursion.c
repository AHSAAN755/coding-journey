#include<stdio.h>
void stars(int j,int n){
	if(j<=n){
		printf("* ");
	stars(j+1,n);
	}
}
void display(int i,int n){
	if(i<=n){
		stars(i,n);
		printf("\n");
		display(i+1,n);
	}
}
void main(){
	int n;
	scanf("%d",&n);
	display(1,n);
}
