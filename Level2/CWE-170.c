#include <stdio.h>

int main(void){
	unsigned int secret = 0xcafebabe;
	char buf[16];

	read(0x0,buf,0x30);
	printf(buf);

	return 0;
}
