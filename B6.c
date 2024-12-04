#include <stdio.h>

int sumary(int arr[],int n,int i){
	
	if(i >= n){
		return 0;
	}
	return arr[i] + sumary(arr,n,i+1);
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
	printf("%d",sumary(arr,n,0));
	return 0;
}
