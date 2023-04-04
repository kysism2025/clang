#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct NODE {
	struct NODE* next;
	int data;
};

void main() {

	struct NODE* head = (struct NODE*)malloc(sizeof(struct NODE));

	struct NODE* node1 = (struct NODE*)malloc(sizeof(struct NODE));
	head->next = node1;
	node1->data = 10;

	struct NODE* node2 = (struct NODE*)malloc(sizeof(struct NODE));
	node1->next = node2;
	node2->data = 20;

	struct NODE* node3 = (struct NODE*)malloc(sizeof(struct NODE));
	node2->next = node3;
	node3->data = 30;

	node3->next = NULL;

	struct NODE* curr = head->next;
	while (curr != NULL) {
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	free(node3);
	free(node2);
	free(node1);
	free(head);
}

