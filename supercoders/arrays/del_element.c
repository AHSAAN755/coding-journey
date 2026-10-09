#include<stdio.h>
 int del(int a[],int n,int pos){
 	int i;
 	if(pos>n+1 ||pos<=0){
 		printf("Invalid");
 		return 0;
	}
 	for(i=pos-1;i<n;i++){
 		a[i]=a[i+1];
	 }
	 a[n-1]=NULL;
	 n--;
	return 1;
}
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
 int main(){
	int n,i,pos,x;
	scanf("%d",&n);
	int a[n+1];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&pos);
	x=del(a,n,pos);
	if(x==1)
	n--;
	display(a,n);
	return 0;
}
