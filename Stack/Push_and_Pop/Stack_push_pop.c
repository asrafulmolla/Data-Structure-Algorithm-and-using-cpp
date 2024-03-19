#include<stdio.h>
int stack[100];
int op,n,top,x,i,top=-1;
void push();
void pop();
void display();
int main()
{
    printf("\n Enter the size(0-100):");
    scanf("%d",&n);
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n exit");
                break;
            }

        }
    }
    while(op!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n Stack is overflow");

    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n Stack is underflow");
    }
    else
    {
        printf("\n The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in Stack \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
    {
        printf("\n The Stack is empty");
    }

}