#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
struct stack{
	int top;
	unsigned capacity;
	int* array;
};
struct stack* createStack(unsigned capacity)
{
	struct stack* Stack=(struct stack*)malloc(sizeof(struct stack));
	Stack->top=-1;
	Stack->capacity=capacity;
	Stack->array=(int*)malloc(Stack->capacity*sizeof(int));
	return Stack;
}
int isFull(struct stack* Stack)
{
	return Stack->top==Stack->capacity-1;
}
int isEmpty(struct stack* Stack)
{
	return Stack->top==-1;
}
void push(struct stack* Stack,int item)
{
	if(isFull(Stack))
	return;
	Stack->array[++Stack->top]=item;
	printf("%d is pushed to stack\n",item);
}
int pop(struct stack* Stack)
{
	if(isEmpty(Stack))
	return INT_MIN;
return Stack->array[Stack->top--];
}
int peek(struct stack* Stack)
{
	if(isEmpty(Stack))
	return INT_MIN;
	return Stack->array[Stack->top];
}
int main()
{
	struct stack* Stack=createStack(100);
	push(Stack,10);
	push(Stack,40);
	printf("%d is popped from the stack\n",pop(Stack));
	push(Stack,20);
	push(Stack,30);
	printf("%d is popped from the stack\n",pop(Stack));
	return 0;
}
