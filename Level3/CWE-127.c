#include <stdio.h>
#include <string.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login failed!");
}


int main(void){
	char password_buf[16];
	char user_buf[16];
	char secret_buf[16];
	int index;

	setvbuf(stdin,0x0,_IONBF,0x0);
	setvbuf(stdout,0x0,_IONBF,0x0);

	strncpy(secret_buf,"P@ssword",8);

	printf("Input your message : ");
	fgets(user_buf,16,stdin);

	printf("OK, input your index you want print : ");
	
	scanf("%d%*c",&index);

	printf("Your index is [%d] : ",index);
	puts(&user_buf[index]);

	printf("By the way, input your password : ");
	fgets(password_buf,16,stdin);
	

	if(strncmp(secret_buf,password_buf,8) == 0){
		login();
	}else{
		login_failed();
	}

	return 0;
}
