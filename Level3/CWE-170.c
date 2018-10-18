#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void){
	char secretbuf[16];
	char user_buf[16];

	strncpy(secretbuf,"!SECRET!",8);

	read(0,user_buf,sizeof(user_buf));

	puts(user_buf);

	return 0;
}
