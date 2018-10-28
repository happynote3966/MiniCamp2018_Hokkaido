#include <stdio.h>
#include <string.h>	// strcmp

char password[9] = "p@ssword";

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login Failed!");
}

int auth(char *input_password){
	if(strcmp(password,input_password) == 0){
		return 0;
	}else{
		return 1;
	}
}


int main(int argc, char *argv[]){

	switch(auth(argv[1])){
		case 1:
			login_failed();
		case 0:
			login();
	}

	return 0;
}
