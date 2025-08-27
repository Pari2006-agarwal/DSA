#include<stdio.h>
#define Max 5
int stack[Max];
int top = -1;
void push(int value)
{
    if(top == Max-1){
        printf("Stack overflow! cannot push %d\n",value);
    }
    else{
        stack[++top] = value;
        printf("%d\n pushed to stack",value);
    }
}
void pop()
{
    if(top == -1)
    {
        printf("Stack underflow! Cannot pop\n ");
    }
    else{
        printf("%d\n popped from stack",stack[top--]);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else{
        printf("%d\n top element of stack",stack[top]);
    }
}
void display()
{
    if(top == -1)
    {
        printf("stack is empty");
    }
    else{
        printf("stack element");
        for(int i = top ; i >= 0; i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main()
{
    int choice , value;
    while(1){
        printf("1.Push\n 2.Pop\n 3.Peek\n 4.Display\n 5.Exit\n ");
        printf("Enter your choice");
        scanf("%d\n",&choice);
        switch (choice)
        {
        case 1 :
            printf("enter the value to push");
            scanf("%d\n",&value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            display();
            break;
        default:
            printf("invalid situation! Please try again:");
        }
    }
    return 0;
}
