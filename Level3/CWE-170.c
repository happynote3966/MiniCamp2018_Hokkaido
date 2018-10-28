#include <stdio.h>
#include <string.h>
#include <unistd.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login failed!");
}

int main(void){
	char secret[9] = "!53cr37!";
	char buf[16];
	char password_buf[10];

	setvbuf(stdin,0x0,_IONBF,0x0);
	setvbuf(stdout,0x0,_IONBF,0x0);

	printf("Input your message : ");
	read(0x0,buf,sizeof(buf));
	puts(buf);

	printf("By the way, input your password : ");
	fgets(password_buf,sizeof(password_buf),stdin);

	if(strncmp(password_buf,secret,strlen(secret)) == 0){
		login();
	}else{
		login_failed();
	}

	return 0;
}
