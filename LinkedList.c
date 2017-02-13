
#include "LinkedList.h"



void init(void){
	buffer = malloc(sizeof(node_t) * BUFFER_SIZE);
}

void add(int newVar){
	if(head == NULL){
		head = malloc(sizeof(node_t));
		head->var = newVar;
		return;
	}
	node_t *ref = head;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = malloc(sizeof(node_t));
	head->next->var= newVar;
	head = ref;
}

void resize(void){
	static int occurences = 1;
	buffer = realloc(buffer, ++occurences * BUFFER_SIZE);	
}

void printAll(void){
	printf("Displaying List...\n");
	node_t *ref = head;
	while(ref != NULL){
		printf("%d-\t", ref->var);
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
