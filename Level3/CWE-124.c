#include <stdio.h>
#include <string.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login Failed!");
}


int main(void){
	char buf[20] = {0};
	char password[10];
	int num_of_indent;

	memset(buf,' ',sizeof(buf)-1);
	printf("Input your indent numbers : ");
	scanf("%d%*c",&num_of_indent);
	printf("Input your name : ");
	fgets(buf+num_of_indent,sizeof(buf),stdin);
	printf("Your name is : %s\n",buf);

	printf("Password is : %s\n",password);

	if(!strncmp(password,"P@ssword",8)){
		login();
	}else{
		login_failed();
	}

	return 0;
}
