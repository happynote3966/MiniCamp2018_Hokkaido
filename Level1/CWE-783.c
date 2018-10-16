#include <stdio.h>

unsigned int passcode = 3966;

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login Failed!");
}

unsigned auth(void){
	unsigned int input_passcode;

	printf("Input your password : ");
	scanf("%d",&input_passcode);
	if(input_passcode == passcode){
		return 0;
	}else{
		return 1;
	}
}

int main(void){
	unsigned int is_login;

	if(is_login = auth() == 0){
		login_failed();
	}else{
		login();
	}

	return 0;
}
