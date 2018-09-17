#include <stdio.h>
#include <string.h>

void login(void){
	puts("OK! Login!");
}

int main(void){
	unsigned int passcode;
	printf("Input your passcode :");
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
