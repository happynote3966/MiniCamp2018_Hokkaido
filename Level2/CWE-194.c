#include <stdio.h>
#include <stdlib.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login failed!");
}

int main(void){
	int number;
	char buf[15];
	fgets(buf,14,stdin);

	if(atol(buf) > 2147483647){
		number = 0;
	}else{
		number = atoi(buf);
	}

	


	if((unsigned int)number > 2147483647){
		login();
	}else{
		login_failed();
	}

	return 0;
}
