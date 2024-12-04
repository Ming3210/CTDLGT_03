#include <stdio.h>
#include <string.h> 

int checkReverse(char str[], int start, int end){
	if(start>= end){
		return 0;
	}
	if(	str[start] == str[end]){
		return 0;
	}else{
		return 1;
	}
	
	return checkReverse(str, start+1, end -1);
}

int main(){
	char str[100];
	printf("Nhap chuoi: ");
	gets(str);  
	int result = checkReverse(str, 0, strlen(str) - 1); 
	if(result == 1){
		printf("Palindrome invalid");
	}else{
		printf("Palindrome valid");
		
	}
	return 0;
}
