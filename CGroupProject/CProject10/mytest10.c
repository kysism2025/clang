#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
    int data;              /* ������ ������ */
    int end;
    struct _Node* next;    /* ���� ��带 ����ų ������*/
} Node;
Node* head;

void init() {
    head = NULL;
}

void insert(int data) {

    Node* ptr;
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;    // ������ �Ҵ� 
    newNode->next = NULL;    // next ������ �ʱ�ȭ 

    if (head == NULL) {    // empty
        head = newNode;
    }
    else {
        ptr = head;
        while (ptr->next) { // ������ ����� next�� NULL�϶� ��������
            ptr = ptr->next;
        }
        ptr->next = newNode;    // ������ ����� next�� ���� �߰��� Node������ �߰��Ѵ�.
    }
}

closeLink() {
    Node* ptr;
    ptr = head;
    while (ptr->next) {
        ptr = ptr->next;
    }
    if (ptr->next == NULL) {
        ptr->end = 99;
        ptr->next = head;
    }
    
}

void printList() {
    Node* ptr;
    for (ptr = head; ptr->end != 99 ; ptr = ptr->next) {
        printf("%p %d, %p\n", ptr, ptr->data, ptr->next);
    }
    printf("%p %d, %p \n", ptr, ptr->data, ptr->next);
}

void main() {
    int data;

    init();
    insert(100);
    insert(300);
    insert(50);
    insert(200);
    closeLink();
    printList();
}