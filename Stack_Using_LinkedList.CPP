#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
}*top=NULL;

void push(int val)
{
    struct node*n=new node;
    n->data=val;
    if(top==NULL)
        n->next=NULL;
    else
        n->next=top;
        top=n;
    
} 

int pop()
{
    int d;
    if(top==NULL)
    {
        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    else
    {
        struct node*ptr=top;
        top=top->next;
        d=ptr->data;
        free(ptr);
    }
    return d;
}

int main()
{   
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    struct node*t;
    t=top;
    while(t->next!=NULL)
    {
        cout<<t->data<<"-->";
        t=t->next;
    }
    cout<<t->data;
    cout<<endl;
    int a=pop();
    cout<<"Popped element is:"<<a<<endl;
    a=pop();
    cout<<"Popped element is:"<<a<<endl;
    a=pop();
    cout<<"Popped element is:"<<a<<endl;
    a=pop();
    cout<<"Popped element is:"<<a<<endl;
    a=pop();
    cout<<"Popped element is:"<<a<<endl;
    a=pop();
    cout<<"Popped element is:"<<a<<endl;
    
    return 0;
}

