#ifndef LinkedList.h
#define LinkedList.h


#include <stdio.h>
#include <stdlib.h>



typedef struct Node{
	int var;
	struct Node *next;
}node_t;


node_t *head;
int curSize;

void add(int newVar);
void printAll(void);
int get(int index);
int size(void);




#endif
