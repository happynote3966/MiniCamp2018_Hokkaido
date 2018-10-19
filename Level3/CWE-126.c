#include <stdio.h>
#include <string.h>

char secretstring[] = "I_want_to_be_a_WHITE_Hacker!";

int main(void){
	char buf[sizeof(secretstring)];
	char name[20];

	printf("Input your name :");
	scanf("%s",name);

	strncpy(buf,secretstring,sizeof(secretstring));

	printf("Hello, %s",name);

	return 0;
}
