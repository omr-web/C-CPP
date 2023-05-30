#ifndef LINKED_LIST
#define LINKED_LIST

typedef struct node {
    int data;
    int key;
    struct node* Next;
}Node;


void printList();

void insertElement(int Key, int data);

struct node* deleteElement();

bool isEmpty();

int length();

struct node* find(int key);

struct node* deleteFunc(int key);


#endif 