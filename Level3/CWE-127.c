#include <stdio.h>
#include <string.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login failed!");
}


int main(void){
	char secret_buf[16];
	char user_buf[16];
	char password_buf[16];
	int index;

	strncpy(secret_buf,"P@ssword",8);

	printf("Input your message : ");
	fgets(user_buf,16,stdin);
	fflush(stdin);

	printf("OK, input your index you want print : ");
	
	scanf("%d",&index);

	puts(&user_buf[index]);

	printf("By the way, input your password : ");
	fflush(stdout);
	fgets(password_buf,16,stdin);
	printf(password_buf);

	if(strncmp(secret_buf,password_buf,8) == 0){
		login();
	}else{
		login_failed();
	}

	return 0;
}
