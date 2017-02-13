#include <stdio.h>
#include "LinkedList.h"



int main(){
	
	init();
	add(2);
	add(4);
	add(8);
	add(16);
	add(32);
	printAll();
	
	printf("Getting second element: %d", get(1));
	printf("Goodbye\n");
	
	return 0;
}
