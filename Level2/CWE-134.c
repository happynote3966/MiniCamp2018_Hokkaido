#include <stdio.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login failed!");
}


int main(void){
	unsigned int secret = 0xcafebabe;
	char buf[30];
	unsigned int passcode;

	printf("Input your name : ");

	fgets(buf,sizeof(buf)-1,stdin);

	printf(buf);
	printf("\n");

	puts("By the way, input your passcode : ");

	scanf("%u",&passcode);

	if(passcode == secret){
		login();
	}else{
		login_failed();
	}

	return 0;
}
