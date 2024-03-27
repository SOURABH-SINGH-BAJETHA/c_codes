#include<stdio.h>               // LAST OCCURANCE OF LINKED LIST
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

void push(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
    }
    else{
        struct node* p = head;
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = temp;

    }
}

void print(){
    struct node* temp = head;
    printf("list ");


    while(temp!= NULL){

        printf("->%d",temp->data);
        temp = temp->next;

    }

    printf("\n");
}

void last_occurance(int data){
    struct node* curr;
    struct node* prev;
    struct node* next;

    if(head->data == data){
        prev = NULL;
        curr = head;
        next = curr->next;
    }

    struct node* temp = head;

    while(temp->next != NULL){
        if(temp->next->data == data){
            prev = temp;
            curr = temp->next;
            next = curr->next;
        }

        temp = temp->next;

    }

    prev->next = next;
    free(curr);

    
}

int main(){


    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(2);
    push(7);
    push(1);
    push(2);

    print();

    last_occurance(2);

    print();





return 0;
}