#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstdbool>
#include "linked_list.h"


/*
Bağlı Listeler:

memory 
a[0]
a[1]
.
.
.
Kısıtlamalar: (bağlı listenin aslında belirli avantajlarıdır)
-limited memory
-long term records

C'de bağlı liste pointer ile
C++'De list,set,map,class vactor ile yapılıyor.

STRUCTER DESIGN:
{
    int data;
    struct Node *Next;
}
*/



struct node* head = NULL;
struct node *current = NULL;

void insertElement(int Key, int data) {
    Node* link = (Node*)malloc(sizeof(Node));
    link->data = data;
    link->key = Key;
    
    
    link->Next = head;

    head = link; 


}

void printList(){
    Node *ptr = head;
    
    while(ptr != NULL) {
        printf("%d %d \n",ptr->data,ptr->data);
        ptr = ptr->Next; //  ptr++ yemez!!!
    }
}

struct node* deleteElement() {
    Node *temp = head;
    head = head->Next;
    return temp;
}

bool isEmpty() {
    if(head == NULL)
        return true;
    else 
        return false;
}

int length() {
    int len = 0;
    Node* temp;

    for(temp=head;temp != NULL; temp = temp->Next) {
        len++;
    }
    return len;
}

struct node* find(int key) {
    Node* current = head;

    if(head == NULL)
        return NULL;

    while(current->key != key) { // key in kontrolü burada yapılır
        
        if(current->Next == NULL) {
            return NULL;
        }
        else {
            current = current->Next;
        }

    }
    return current;

}

struct node* deleteFunc(int key) {
    Node* current = head;
    Node* previous = NULL;

    if(head == NULL)
        return NULL;

    // bu while key bulmak için 
    while(current->key != key) {
        
        if(current->Next == NULL)
            return NULL;
        else {
            previous = current;
            current = current->Next;
        }
       
        
    }
    
    // bu kısım key in olduğu elementin silinmesi için:
     if(current == head) // current head ise head i sil
            head = head->Next;
        else // current head değil ise current ı sil 
            previous->Next = current->Next;
    
    return current;
}

