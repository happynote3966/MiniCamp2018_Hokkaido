#include <stdio.h>

unsigned int passcode = 3966;

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login Failed!");
}


int main(void){
	unsigned int input_passcode;
	unsigned int zero_variable;

	printf("Input your passcode : ");
	scanf("%d",&input_passcode);

	printf("input_passcode = %d\n",input_passcode);
	printf("passcode       = %d\n",passcode);
	printf("zero_variable  = %d\n",zero_variable);

	if(passcode - input_passcode == zero_variable){
		login();
	}else{
		login_failed();
	}

	return 0;
}
