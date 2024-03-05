#include<bits/stdc++.h>
using namespace std;

int top = -1;
#define SIZE 3
int inp_array[SIZE];
void push();
void pop();
void show();

int main()
{
    int choice;
    while (1)
    {
        cout<<"\nPerform operations on the stack:";
        cout<<"\n1.Push the element\n2.Pop the element\n3.Show\n4.End";
        cout<<"\n\nEnter the choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            cout<<"\nInvalid choice!!";
        }
    }
}

void push()
{
    int x;
    if (top == SIZE - 1)
    {
        cout<<"\nOverflow!!\n";
    }
    else
    {
        cout<<"\nEnter the element to be added onto the stack: ";
        cin>>x;
        top++;
        inp_array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        cout<<"\nUnderflow!!\n";
    }
    else
    {
        cout<<"\nPopped element: "<< inp_array[top];
        top--;
    }
}

void show()
{
    if (top == -1)
    {
        cout<<"\nUnderflow!!\n";
    }
    else
    {
        cout<<"\nElements present in the stack: \n";
        for (int i = top; i >= 0; --i)
            cout<<"\n"<<inp_array[i];
    }
}