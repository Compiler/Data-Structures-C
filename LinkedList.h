#ifndef LinkedList.h
#define LinkedList.h

#define BUFFER_SIZE 25


#include <stdio.h>
#include <stdlib.h>



typedef struct Node{
	int var;
	struct Node *next;
}node_t;


node_t *head;


node_t *buffer;

void init(void);
void add(int newVar);
void printAll(void);
void resize(void);
int get(int index);





#endif
