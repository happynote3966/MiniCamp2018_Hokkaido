#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *ptr1,*ptr2,*ptr3;
	char size_string_buffer[20];
	int user_size;

	printf("Input your buffer size : ");
	fgets(size_string_buffer,sizeof(size_string_buffer) - 1,stdin);
	user_size = atoi(size_string_buffer);
	ptr1 = (char *)malloc(sizeof(char) * user_size);

	printf("Input your contents : ");
	fgets(ptr1,user_size,stdin);
	puts(ptr1);
	

	printf("Input your buffer size : ");
	fgets(size_string_buffer,sizeof(size_string_buffer) - 1,stdin);
	user_size = atoi(size_string_buffer);
	ptr2 = (char *)malloc(sizeof(char) * user_size);

	printf("Input your contents : ");
	fgets(ptr2,user_size,stdin);
	puts(ptr2);


	printf("Input your buffer size : ");
	fgets(size_string_buffer,sizeof(size_string_buffer) - 1,stdin);
	user_size = atoi(size_string_buffer);
	ptr3 = (char *)malloc(sizeof(char) * user_size);

	printf("Input your contents : ");
	fgets(ptr3,user_size,stdin);
	puts(ptr3);

	return 0;
}
