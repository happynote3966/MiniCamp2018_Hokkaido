#include <stdio.h>

char password[9] = "p@ssword";

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login Failed!");
}

int main(void){
	switch((unsigned int)strcmp(password,argv[1])){
		case -1:
			login_failed();
		case 1:
			login_failed();
		case 0:
			login();
	}

	return 0;
}
