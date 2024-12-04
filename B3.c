#include <stdio.h>

int fibonancci (int n){
	if(n==0){
		return 0;
	}
	else if( n == 1 ){
		return 1;
	}
	else return fibonancci(n - 1) + fibonancci(n - 2);
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Day Fibonacci tu 0 den %d la:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonancci(i));
    }
	
	return 0;
}
