#include <stdio.h>

void login(void){
	puts("OK! Login!");
}


int main(void){
	char buf[30];

	gets(buf);

	printf(buf);

	return 0;
}
