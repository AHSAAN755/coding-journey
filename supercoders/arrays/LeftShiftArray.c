//left shifting
#include<stdio.h>
 int Lshift(int a[],int n,int k){
 	int i,temp;
 	k=k%n;
 	if(k==0){
 		return 0;
	 }
 	temp=a[0];
 	for(i=0;i<n;i++){
 		a[i]=a[i+1];
	 }
	 a[n-1]=temp;
	 k--;
	 return(Lshift(a,n,k));
 	
}
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
 int main(){
	int n,i,k,x;
	scanf("%d",&n);
	int a[n+1];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	Lshift(a,n,k);
	display(a,n);
	return 0;
}
