#include<stdio.h>
 int reverse(int a[],int l,int r){
 	int left=l,right=r-1;
	 while(left<right)
	{
		int temp=a[left];
		a[left]=a[right];
		a[right]=temp;
		left++;
		right--;	
	}
}
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
 int main(){
	int n,i,k;
	scanf("%d",&n);
	int a[n+1];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	reverse(a,0,k);
	reverse(a,k,n);
	reverse(a,0,n);
	display(a,n);
	return 0;
}
