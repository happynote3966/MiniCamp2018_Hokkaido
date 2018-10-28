#include <stdio.h>
#include <stdlib.h>

void login(void){
	puts("OK! Login!");
}


int main(void){
	int sub_sum = 0;
	int input_number;

	while(1){
		printf("Input your number : ");
		scanf("%d",&input_number);

		if(input_number < 0){
			puts("ERROR! Do not Enter the Negative Value!");
			exit(-1);
		}	

		sub_sum -= input_number;
		printf("sub_sum = %d\n",sub_sum);

		if(sub_sum > 0){
			login();
			exit(0);
		}
	}

	return 0;
}
