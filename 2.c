#include<stdio.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;

void enqueue(int value){
    if ( front == max-1)
    {
        printf("Queue Overflow\n");
        return ;
    }
    if ( front == -1)
        front= 0;
    
    rear++;
    queue[rear]=value;
}

int dequeue(){
    if(front == -1 || front > rear){
        printf("Queue Underflow\n");
        return -1;
    }
    int value =queue[front];
    front++;
    return value;
}
int main(){
    
    typedef struct {
        int data[max];
        int top;
    } stack;
    return 0;
}