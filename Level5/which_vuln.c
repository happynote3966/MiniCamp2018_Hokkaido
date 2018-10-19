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

	printf("%s\n",path_name_buffer);

	if(strlen(path_name_buffer) + strlen(basename(argv[1])) + 1 > 100 - 1){
		puts("TOO MANY STRINGS!");
		exit(-1);
	}

	realpath(argv[1],path_name_buffer);

	printf("%s\n",path_name_buffer);




	/*



	basename_length = strlen(argv[1]);

	basename_buffer = (char *)malloc(sizeof(char) * basename_length);

	printf("Basename Length = %d\n",basename_length);

	full_path = realpath(argv[1]);
	puts(full_path);

	directory_name = dirname(full_path);
	puts(directory_name);

	directoryname_length = strlen(directory_name);

	directoryname_buffer = (char *)malloc(sizeof(char) * directoryname_length);

	base_name = basename(full_path);

	strncpy(directoryname_buffer,directory_name,directoryname_length);
	strncpy(basename_buffer,base_name,basename_length);

	printf("%s/%s\n",directoryname_buffer,basename_buffer);
	*/

	return 0;
}
	
