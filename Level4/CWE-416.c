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
	int select,loop = 1;
	char *ptr;

	ptr = malloc(sizeof(char) * 20);
	strncpy(ptr,"cafebabe",8);

	while(loop){
		printf("1. Allocate memory\n");
		printf("2. Free memory\n");
		printf("3. Input memory\n");
		printf("4. Output memory\n");
		printf("Other : Exit\n");
		printf("Input your command : ");
		scanf("%d%*c",&select);
		switch(select){
			case 1:
				puts("Allocate memory");
				ptr = malloc(sizeof(char) * 20);
				break;
			case 2:
				puts("Free memory");
				free(ptr);
				break;
			case 3:
				puts("Input memory");
				read(0,ptr,19);
				ptr[19] = '\0';
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
