#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct {
    int top;
    int items[MAX]
} Stack;

void initStack(Stack *s){
    s->top = -1;
}

int isEmpty(Stack *s){
    return s->top == -1;
}

int isFull(Stack *s){
    return s->top == MAX -1;
}

void push(Stack *s,int value){
    if(isFull(s)){
        printf("Stack overfloe\n");
        return;
    }
    s->items[++s->top] = value;
}

int pop(Stack *s){
    if(isEmpty(s)){
        printf("Stack underflow\n");
        return -1;
    }
    return s->items[s->top--];
}

int peek(Stack *s){
    if(isEmpty(s)){
        printf("Stack is empty \n");
        return -1;
    }
    return s->items[s->top];
}

void display(Stack *s){
    if(isEmpty(s)){
        printf("Stack is empty");
        return;
    }
    printf("Stack elements are: \n");
    for(int i = s->top; i>= 0; i--){
        printf("%d\n ", s->items[i]);
    }
}

int main(){
    Stack s;
    initStack(&s);

    return 0;
}