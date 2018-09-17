#include <stdio.h>


unsigned int passcode = 3966;

void login(void){
	puts("OK! Login!");
}

void login(void){
	puts("NO! Login Failed!");
}

int main(void){
	int input_passcode;
	printf("Input you passcode :");
	scanf("%d",&input_passcode);

	if(input_passcode = passcode){
		login();
	}else{
		login_failed();
	}

	return 0;
}
