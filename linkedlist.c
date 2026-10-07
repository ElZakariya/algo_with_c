#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main(){

    struct Node *head = NULL;
    struct Node *node1 = malloc(sizeof(struct Node));
    struct Node *node2 = malloc(sizeof(struct Node));

    node1->data = 10;
    node1->next = node2;

    node2->data = 20;
    node2->next = NULL;

    head = node1;

    struct Node *node3 = malloc(sizeof(struct Node));
    node3->data = 30;
    node3->next = head;
    head = node3;

    struct Node *curent = head;
    while( curent != NULL){
        printf("%d \n", curent->data);
        curent = curent->next;
    }
    free(node3);
    free(node1);
    free(node2);
    return 0;
}