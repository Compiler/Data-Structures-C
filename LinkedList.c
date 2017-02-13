
#include "LinkedList.h"



void init(void){
	buffer = malloc(sizeof(node_t) * BUFFER_SIZE);
}

void add(int newVar){
	node_t *ref = head;
	while(ref != NULL){
		ref = ref->next;
	}
	ref = malloc(sizeof(node_t));
	ref->var= newVar;
}

void resize(void){
	static int occurences = 1;
	buffer = realloc(buffer, ++occurences * BUFFER_SIZE);	
}

void printAll(void){
	node_t *ref = head;
	while(ref != NULL){
		printf("%d\t", ref->var);
		ref = ref->next;
	}
}

int get(int index){

	node_t *ref = head;
	int count = 0;
	while(ref->next != NULL){
		
		if(count == index){
			return ref->var;
		}
		ref = head->next;
	}


}
