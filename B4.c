#include <stdio.h>
#include <string.h> 

int reverse(char str[], int start, int end){
	if(start>= end){
		return 0;
	}
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	return reverse(str, start+1, end -1);
}

int main(){
	char str[100];
	printf("Nhap chuoi: ");
	gets(str);  
	reverse(str, 0, strlen(str) - 1);  
	printf("Chuoi dao nguoc: %s\n", str);
	return 0;
}
