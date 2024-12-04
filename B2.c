#include <stdio.h>

int sumary(int n, int m) {
    if (n > m) {  
        return 0;
    }
    return n + sumary(n + 1, m);  
}

int main() {
	int n,m;
	printf("Nhap n: ");
	scanf("%d", &n);
   	do {
        printf("Nhap m: ");
        scanf("%d", &m);
        if (m <= n) {
            printf("m phai lon hon n.\n");
        }
    } while (m <= n);
    printf("%d", sumary(n, m));  
    return 0;
}
