#include <stdio.h>



int math(int n, int k){
	if(k == 0 || k == n){
		return 1;
	}
   return math(n - 1, k - 1) + math(n - 1, k);
}

int main(){
	
	int n,k;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Nhap k: ");
	scanf("%d",&k);
	printf("%d", math(n,k));
	return 0;
}
