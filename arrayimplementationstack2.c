#include <stdio.h>
// pop operation
#include <stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;
void push(int data)
{
    if (top == MAX - 1)
    {
        printf("stack overflow");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}
int pop()
{
    int value;
    if (top == -1)
    {
        printf("stack underflow");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}
void print()
{
    int i;
    if (top == -1)
    {
        printf("stack underflow\n");
        return;
    }
    for (i = top; i >= 0; i--)
        printf("%d", stack_arr[i]);
    printf("\n");
}
int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data=pop();
    data=pop();
    print();
    printf("%d",data);

    return 0;
}