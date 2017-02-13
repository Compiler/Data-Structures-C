#include <stdio.h>
#include "LinkedList.h"



int main(){
	
	add(2);
	add(4);
	add(8);
	add(16);
	add(32);
	printAll();
	
	printf("Getting second element: %d\n", get(1));
	printf("\nGoodbye\n");
	
	return 0;
}
