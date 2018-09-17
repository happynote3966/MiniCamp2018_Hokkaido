#include <stdio.h>

char hellostring[] = "Hello!"

void login(void){
	puts("OK! Login!");
}

int main(void){
	char name[20];
	char buf[20];

	printf("Input your name :");
	fgets(name,sizeof(name)-1,stdin);

	memcpy(buf,hellostring,sizeof(hellostring));
	memcpy(buf+sizeof(hellostring),name,sizeof(name));

	printf("%s",buf);

	return 0;
}
