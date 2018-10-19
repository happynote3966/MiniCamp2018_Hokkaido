#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	char *original,*reverse;
	int i;

	original = (char *)malloc(sizeof(char) * 100);
	reverse = (char *)malloc(sizeof(char) * 100);

	strcpy(original,argv[1]);

	
