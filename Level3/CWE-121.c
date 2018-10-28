#include <stdio.h>
#include <string.h>

void login(void){
	puts("OK! Login!");
}


int main(void){
	char buf[20];
	char name[20];

	printf("Input your name : ");
	fgets(name,sizeof(name),stdin);

	strcpy(buf,"Hello! ");
	strncat(buf,name,strlen(name));

	printf("%s",buf);

	return 0;
}
