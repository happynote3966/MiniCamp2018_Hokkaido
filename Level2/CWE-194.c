#include <stdio.h>
#include <stdlib.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login failed!");
}

int main(void){
	int tmp_number;
	short number;
	char buf[11];

	printf("Input your number : ");

	fgets(buf,sizeof(buf),stdin);

	if(atoi(buf) < 0){
		puts("ERROR! Do not Enter the Large Number!");
		tmp_number = 0;
	}else{
		tmp_number = atoi(buf);
	}

	number = tmp_number;

	if(number < 0){
		login();
	}else{
		login_failed();
	}

	return 0;
}
