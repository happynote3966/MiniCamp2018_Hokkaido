#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void login(void){
	puts("OK! Login!");
}

void login_failed(void){
	puts("NO! Login failed!");
}

int main(void){
	char password_buf[10];
	char size_buf[10];
	int select,loop = 1;
	char *ptr;

	setvbuf(stdin,0x0,_IONBF,0x0);
	setvbuf(stdout,0x0,_IONBF,0x0);

	ptr = malloc(sizeof(char) * 24);
	strncpy(ptr,"[!] Password is cafebabe",24);
	free(ptr);

	while(loop){
		printf("Input your command : ");
		scanf("%d%*c",&select);
		switch(select){
			case 1:
				puts("Allocate memory");
				ptr = malloc(sizeof(char) * 24);
				break;
			case 2:
				puts("Free memory");
				free(ptr);
				break;
			case 3:
				puts("Input memory");
				printf("Input your size : ");
				read(0,size_buf,9);
				printf("Input your content : ");
				read(0,ptr,atoi(size_buf));
				break;
			case 4:
				puts("Output memory");
				puts(ptr);
				break;
			default:
				puts("Exit");
				loop = 0;

		}
	}

	printf("By the way, input your password : ");
	fgets(password_buf,10,stdin);

	if(strncmp(password_buf,"cafebabe",8) == 0){
		login();
	}else{
		login_failed();
	}

}
