#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
    int data;              /* 저장할 데이터 */
    int end;
    struct _Node* next;    /* 다음 노드를 가리킬 포인터*/
} Node;
Node* head;

void init() {
    head = NULL;
}

void insert(int data) {

    Node* ptr;
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;    // 데이터 할당 
    newNode->next = NULL;    // next 포인터 초기화 

    if (head == NULL) {    // empty
        head = newNode;
    }
    else {
        ptr = head;
        while (ptr->next) { // 마지막 노드의 next가 NULL일때 빠져나와
            ptr = ptr->next;
        }
        ptr->next = newNode;    // 마지막 노드의 next에 새로 추가된 Node정보를 추가한다.
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