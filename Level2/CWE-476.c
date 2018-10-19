#include <stdio.h>
#include <string.h>

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(void){
	char c;
	char *pointer;

	c = getc(stdin);

	pointer = strchr(alphabet,c);

	printf("%s",pointer);

	return 0;
}
