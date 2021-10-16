#include<iostream>
#include<conio.h>
using namespace std;

#define size 5

int stack[size];
int top=-1;

void push(int data)
{
    if(top >= size-1)
    {
    cout<<"Stack Overflow"<<endl;
    return;
    }
    top++;
    stack[top]=data;
};

void pop()
{
    if(top==-1)
    {
    cout<<"Stack underflow"<<endl;
    return;
    }

    top--;
};

void display()
{
    if(top==-1)
    {
    cout<<"Stack underflow"<<endl;
    return;
    }

    for (int i = 0; i <= top; i++)
    {
       cout<<stack[i]<<endl;
    }
    
};

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);   
    push(50);
    push(60); 
    
    display();

    cout<<"After using pop function the stack is"<<endl;
    pop();
    display();
    
    return 0;
}