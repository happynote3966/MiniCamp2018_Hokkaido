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
	char buf[16];
	char name[16] = {0};
	char password_buf[16];
	int output_length;

	strncpy(buf,"!53cr37!",8);

	printf("Input your name : ");
	fgets(name,sizeof(name)-1,stdin);
	printf("Input output length : ");
	scanf("%d%*c",&output_length);

	write(1,name,output_length);

	printf("\nBy the way, input your password : ");
	fgets(password_buf,sizeof(password_buf),stdin);

	if(strncmp(password_buf,buf,8) == 0){
		login();
	}else{
		login_failed();
	}

	return 0;
}
