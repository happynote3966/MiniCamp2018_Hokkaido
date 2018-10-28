#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <libgen.h>

int main(int argc, char *argv[]){
	char path_name_buffer[100];

	if(argv[1] == NULL){
		puts("NO ARGUMENT!\n");
		exit(-1);
	}

	realpath(dirname(argv[1]),path_name_buffer);

	printf("Dirname : %s\n",path_name_buffer);

	if(strlen(path_name_buffer) + strlen(basename(argv[1])) + 1 > 100 - 1){
		puts("TOO MANY STRINGS!");
		exit(-1);
	}

	realpath(argv[1],path_name_buffer);

	printf("Fullpath : %s\n",path_name_buffer);

	return 0;
}
	
