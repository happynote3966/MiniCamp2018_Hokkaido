#include <stdio.h>


int main(void){
	unsigned int secret = 0xcafebabe;
	char buf[30];

	fgets(buf,stdin,sizeof(buf));

	printf(buf);

	return 0;
}
