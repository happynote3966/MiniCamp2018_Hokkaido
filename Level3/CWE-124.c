#include <stdio.h>
#include <string.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login Failed!");
}


int main(void){
	char password[10];
	char buf[20];
	int num_of_indent;

	memset(buf,' ',0x20);
	printf("Input your indent numbers : ");
	scanf("%d",&num_of_indent);
	printf("Input your name : ");
	fgets(buf+num_of_indent,0x19,stdin);
	printf("Your name is : %s\n",buf);

	if(!strncmp(password,"p@ssword",8)){
		login();
	}else{
		login_failed();
	}

	return 0;
}
