#include <stdio.h>
#include <stdlib.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login failed!");
}

int main(void){
	short number;
	char buf[11];

	printf("Input your number : ");

	fgets(buf,sizeof(buf),stdin);

	if(atoi(buf) > 32767){
		puts("ERROR! Do not Enter the Large Number!");
		number = 0;
	}else{
		number = atoi(buf);
	}

	if((unsigned short)number > 32767){
		login();
	}else{
		login_failed();
	}

	return 0;
}
