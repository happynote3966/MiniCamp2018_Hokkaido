#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char secret[] = "[!]Secret Information! Password is !c0ffee!";

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login failed!");
}

int main(void){
	int user_size;
	char *ptr1,*ptr2;
	char password_buffer[20];

	setvbuf(stdin,0x0,_IONBF,0x0);
	setvbuf(stdout,0x0,_IONBF,0x0);

	ptr1 = (char *)malloc(sizeof(char) * 100);

	strncpy(ptr1,secret,sizeof(secret));

	printf("Input realloc length : ");
	scanf("%d%*c",&user_size);

	if(user_size <= 0 || user_size > 4096){
		puts("Too large or small size!\n");
		exit(-1);
	}

	ptr2 = (char *)realloc(ptr1,user_size);

	printf("Input your content : ");

	read(0,ptr2,user_size);
	puts(ptr2);

	printf("By the way, input your password : ");

	fgets(password_buffer,sizeof(password_buffer)-1,stdin);

	if(strncmp(password_buffer,"!c0ffee!",8) == 0){
		login();
	}else{
		login_failed();
	}

	return 0;
}
