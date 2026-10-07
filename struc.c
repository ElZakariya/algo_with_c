#include<stdio.h>
#define max 5
int stack[max];
int top = -1;
void push(int value){
    if( top == max -1){
        printf("Stack Overflow\n");
        return ;
    }
    top++;
    stack[top]=value;
}

int pop (){
    if(top == -1){
        printf("Stack Underflow\n");
        return -1;
    }
    int value = stack[top];
    top--;
    return value;

}

int peek(){
    if(top == -1){
        printf("Stack is empty\n");
        return-1;
    }
    return stack[top];
}

int main(){
    push(10);
    push(20);
    push(30);


    printf("Top: %d\n", peek());

    printf("Pop: %d\n", pop());
    printf("Pop: %d\n", pop());

    printf("Top: %d\n", peek());

    return 0;
}
