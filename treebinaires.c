#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Element{
    int data;
    struct Element *rightChild;
    struct Element *leftChild;
}Element;

Element *createElement(int a){
    Element *newElement;
    newElement = (Element*)malloc(sizeof(Element));
    newElement->data=a;
    newElement->leftChild= NULL;
    newElement->rightChild= NULL;
    return newElement;
}

void prefixe(Element *bt){

    if (bt == NULL)
        return;
    printf("%d\n",bt->data);
    prefixe(bt->leftChild);
    prefixe(bt->rightChild);
}

void Infixe(Element *BT){
    if(BT ==NULL)
        return;
    Infixe(BT->leftChild);
    printf("%d\n",BT->data);
    Infixe(BT->rightChild);
    
}
void posfixe(Element *BT){
    if(BT ==NULL)
        return;
    posfixe(BT->leftChild);
    posfixe(BT->rightChild);
    printf("%d\n",BT->data);
}

bool search(Element *BT, int value){
    if(BT == NULL) return false;
    if(BT->data == value) return true;

    if (search(BT->leftChild,value)) return true;

    return search(BT->rightChild, value);

}

int isEmpty(Element *bt){
    
    return bt == NULL;
}



int main(){

    Element *BT;
    BT= NULL;

    Element *e1;e1 =createElement(1);
    Element *e2;e2 = createElement(2);
    Element *e4;e4 = createElement(4);
    Element *e5;e5 = createElement(5);
    Element *e3;e3 = createElement(3);
    Element *e6;e6 = createElement(6);
    Element *e7;e7 = createElement(7);
    BT = e1;
    e1->leftChild = e2;
    e1->rightChild = e3;

    e2->leftChild = e4;
    e2->rightChild = e5;

    e3->leftChild = e6;
    e3->rightChild = e7;

    printf("%d \n",search(BT,3));

    
    
}