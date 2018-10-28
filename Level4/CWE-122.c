#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login failed!");
}

int main(void){
	char *ptr1;
	char *ptr2;

	ptr1 = (char *)malloc(sizeof(char) * 20);
	ptr2 = (char *)malloc(sizeof(char) * 20);

	memset(ptr2,'X',20);

	printf("Input your message : ");
	gets(ptr1);

	printf("ptr1:%s\nptr2:%s\n",ptr1,ptr2);

	if(strncmp(ptr2,"Overwrite!",10) == 0){
		login();
	}else{
		login_failed();
	}

	return 0;
}
	
