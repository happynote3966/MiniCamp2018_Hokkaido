#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void){
	char *ptr;

	setvbuf(stdin,0x0,_IONBF,0x0);
	setvbuf(stdout,0x0,_IONBF,0x0);

	ptr = malloc(sizeof(char) * 20);

	printf("Input your message : ");

	read(0,ptr,19);
	
	ptr[19] = '\0';

	if(strlen(ptr) >= 10){
		puts("Big!");
		free(ptr);
	}

	if(strlen(ptr) <= 10){
		puts("Small!");
		free(ptr);
	}

	ptr = NULL;

	return 0;
}
