#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
	int fd,ret,i;
	unsigned int file_size;
	char *original,*reverse;

	reverse = (char *)malloc(sizeof(char) * 100);

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

	original = (char *)malloc(sizeof(char) * 100);

	if(original == NULL){
		printf("malloc() ERROR!\n");
		exit(-1);
	}

	ret = read(fd,original,file_size);

	if(ret == -1){
		printf("read() ERROR!\n");
		exit(-1);
	}

	for(i = 0; i < file_size; i++){
		reverse[i] = original[file_size - (i + 1)];
	}

	write(1,reverse,file_size);

	printf("\n");

	free(reverse);
	free(original);

	return 0;
}


