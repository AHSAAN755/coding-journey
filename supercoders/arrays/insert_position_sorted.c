#include<stdio.h>
int insert(int a[],int n, int elem){
	int i,pos=1,flag=0;
	for(i=0;i<n;i++){
		if(elem<a[i])
		{
			pos=i+1;
			flag=1;
			break;
		}
	}
	if(flag==0){
		pos=n+1;
	}
	if(pos>n+1 ||pos<0){
		printf("ERROR!!");
		return 0;
	}
	else{
	for(i=n;i>=pos;i--){
		a[i]=a[i-1];
	} 
	a[pos-1]=elem;
	return 1;
}
}
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
int main(){
	int n,i,elem,x;
	scanf("%d",&n);
	int a[n+1];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&elem);
	x=insert(a,n,elem);
	if (x==1){
		n++;
	}
	display(a,n);
	return 0;
}
