#include<stdio.h>
int main(){
	int n,i,pos,elem;
	scanf("%d",&n);
	int a[n+1];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&pos);
	scanf("%d",&elem);
	if(pos>n+1 || pos<=0){
		printf("Invalid")
	}
	else{
	
	for(i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos-1]=elem;
	n++;
}
	printf{"\n"}
	for(i=0;i<n;i++)
	printf("%d")
}
