#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
	char *buf,*token;
	short count = 0;
	unsigned int file_size;
	int fd,ret,i,is_count;

	fd = open(argv[1],O_RDONLY);

	if(fd == -1){
		printf("open() ERROR!\n");
		exit(-1);
	}

	file_size = lseek(fd,0,SEEK_END);

	if(file_size == -1){
		printf("lseek() ERROR!\n");
	}

	ret = lseek(fd,0,SEEK_SET);

	buf = (char *)malloc(sizeof(char) * file_size);

	if(buf == NULL){
		printf("malloc() ERROR!\n");
	}

	ret = read(fd,buf,file_size);

	if(ret == -1){
		printf("read() ERROR!\n");
	}


	token = strtok(buf," \n");
	
	while(token != NULL){
		count++;
		token = strtok(NULL," \n");
	}
	

	printf("File size is %d words\n",count);

	return 0;
}
