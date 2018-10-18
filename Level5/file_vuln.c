#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>


int main(int argc, char *argv[]){
	int basename_length;
	char *base_name;
	char *directory_name;

	base_name = basename(argv[1]);
	basename_length = strlen(base_name);

	printf("Basename Length = %d\n",basename_length);

	directory_name = realpath(dirname(argv[1]));

	return 0;
}
	
