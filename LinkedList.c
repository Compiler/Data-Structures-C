
#include "LinkedList.h"





void add(int newVar){
	printf("Heads current var: %d", head->var);
	if(head == NULL){
		head = malloc(sizeof(node_t));
		head->var = newVar;
	}else{
		node_t *ref = head->next;
		while(ref != NULL){
			ref = head->next;
		}


		ref = malloc(sizeof(node_t));
		ref->var= newVar;
	}
}

void printAll(void){
	node_t *ref = head;
	while(head != NULL){
		printf("%d\t", head->var);
		head = head->next;
	}
}

int get(int index){
	


}
