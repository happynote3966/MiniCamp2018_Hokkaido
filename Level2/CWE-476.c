#include <stdio.h>

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";



int main(void){
	char c;
	char *pointer;

	getc(c);

	pointer = strchr(alphabet,c);

	printf("%s",pointer);

	return 0;
}
