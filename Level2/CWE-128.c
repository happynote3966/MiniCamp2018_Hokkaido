#include <stdio.h>
#include <stdlib.h>

void login(void){
	puts("OK! Login!");
}


int main(void){
	int sum = 0;
	int input_number;

	while(1){
		printf("Input your number : ");
		scanf("%d",&input_number);

		if(input_number < 0){
			puts("ERROR! Do not Enter the Negative Value!");
			exit(-1);
		}

		sum += input_number;
		printf("sum = %d\n",sum);

		if(sum < 0){
			login();
			exit(0);
		}
	}

	return 0;
}
