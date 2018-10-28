#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(void){
	char c;
	char *pointer;

	printf("%s\n",alphabet);
	printf("Enter the alphabet to change '!' : ");

	c = getc(stdin);

	if(!isalpha(c)){
		puts("ERROR! Enter the ALPHABET!");
		exit(-1);
	}

	pointer = strchr(alphabet,c);

	*pointer = '!';

	printf("%s\n",alphabet);

	return 0;
}
