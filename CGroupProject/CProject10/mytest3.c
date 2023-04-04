#include <stdio.h>
#include <stdlib.h>

struct NODE {
	struct NODE* next;
	int data;
};


void addNode(struct NODE* target, int data) {
	struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));
	newNode->next = target;
	newNode->data = 20;

	target->next = newNode;
}

void main() {

}
