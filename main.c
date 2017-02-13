#include <stdio.h>

int main(){
	
	int input;

	while(input != -1){
		printf("Please print a number:");
		scanf("%d", &input);
		printf("Entered: %d\n", input);

	}

	printf("Goodbye\n");
	
	return 0;
}
