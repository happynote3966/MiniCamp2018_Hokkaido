#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

int main(void){
	int i;
	struct dirent **entry;

	int r = scandir(".",&entry,NULL,NULL);
	if(r == -1){
		printf("ERROR! scandir() faield!\n");
		exit(-1);
	}

	printf("There are %d entries\n",r);
	
	for(i = 0; i < r; i++){
		printf(entry[i]->d_name);
		printf("\n");
		free(entry[i]);
	}

	free(entry);

	return 0;
}
