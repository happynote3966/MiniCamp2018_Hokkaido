#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
	int select;
	char *ptr;

	while(1){
		scanf("%d",&select);
		switch(select){
			case 1:
				puts("Allocate memory");
				ptr = malloc(sizeof(char) * 20);
				break;
			case 2:
				puts("Free memory");
				free(ptr);
				break;
			case 3:
				puts("Input memory");
				read(0,ptr,19);
				ptr[19] = '\0';
				break;
			default:
				puts("ERROR");

		}
	}
}
