#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
	int fd,ret;
	unsigned int file_size;
	char *file_buffer,*token;
	char output_buffer[100];


	fd = open(argv[1],O_RDONLY);

	if(fd == -1){
		printf("open() ERROR!\n");
		exit(-1);
	}

	file_size = lseek(fd,0,SEEK_END);

	if(file_size == -1 || file_size > 4294967296){
		printf("lseek() ERROR!\n");
		exit(-1);
	}

	ret = lseek(fd,0,SEEK_SET);

	if(ret == -1){
		printf("lseek() ERROR!\n");
		exit(-1);
	}

	file_buffer = (char *)malloc(sizeof(char) * file_size);

	if(file_buffer == NULL){
		printf("malloc() ERROR!\n");
		exit(-1);
	}

	ret = read(fd,file_buffer,file_size);

	if(ret == -1){
		printf("read() ERROR!\n");
		exit(-1);
	}

	token = strtok(file_buffer," \n");

	while(token != NULL){
		strcpy(output_buffer,token);
		puts(output_buffer);
		token = strtok(NULL," \n");
	}

	return 0;
}


