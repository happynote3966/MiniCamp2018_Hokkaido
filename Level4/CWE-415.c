#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void){
	char *ptr;

	ptr = malloc(sizeof(char) * 20);

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
