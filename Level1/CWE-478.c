#include <stdio.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login Failed!");
}


int main(void){
	unsigned int passcode;

	printf("This program accept 4 passwords\n");
	printf("Input your passcode : ");

	scanf("%d",&passcode);

	switch(passcode){
		case 3966:
			break;
		case 0x3966:		// 14694 in Decimal
			break;
		case 0xcafebabe:	// 3405691582 in Decimal
			break;
		case 0xdeadbeef:	// 3735928559 in Decimal
			break;
	}

	login();

	return 0;
}
