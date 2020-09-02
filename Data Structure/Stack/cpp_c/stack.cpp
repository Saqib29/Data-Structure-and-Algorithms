#include <cstdio>
using namespace std;

#define MAX_INDEX 100

typedef struct{
    int top;
    int data[MAX_INDEX];
}Stack;

void push(Stack *s, int item)
{


    if (s->top > MAX_INDEX){
        printf("Stack full!\n");
    }
    else{
        s->data[s->top] = item;
        s->top += 1;
    }
}

int pop(Stack *s)
{
    if (s->top == 0){
        printf("Stack is empty!\n");
        return -404;
    }
    else{
        s->top -= 1;
        return s->data[s->top];
    }
}

int main()
{
    Stack _stack;
    _stack.top = 0;

    for(int i=1; i<MAX_INDEX; i++){
        push(&_stack, i);
    }
    printf("Popped: ");
    for(int i=0; i<MAX_INDEX; i++){
        printf("%d ", pop(&_stack));
    }

    return 0;
}
