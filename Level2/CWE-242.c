#include <stdio.h>

void login(void){
	puts("OK! Login!");
}


int main(void){
	char buf[30];

	printf("Input your name : ");

	gets(buf);

	puts(buf);

	return 0;
}
