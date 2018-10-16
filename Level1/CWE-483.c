#include <stdio.h>

unsigned int passcode = 3966;
unsigned int passcode_2nd = 0x3966;	// 14694 in Decimal

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login Failed!");
}

int main(void){
	unsigned int input_passcode;

	printf("Input passcode : ");
	scanf("%d",&input_passcode);
	if(input_passcode == passcode)
		printf("OK, input second passcode : ");
		scanf("%d",&input_passcode);
		if(input_passcode == passcode_2nd){
			login();
		}else{
			login_failed();
		}

	return 0;
}
