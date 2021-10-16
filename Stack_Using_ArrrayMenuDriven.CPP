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
   int val,ch; 
   cout<<"1.Push an element"<<endl;
   cout<<"2.Pop an element"<<endl;  
   cout<<"3.Display the element"<<endl; 
   cout<<"4.Exit"<<endl;
   

   do
   {
       cout<<"Input your choice"<<endl;
       cin>>ch;
       switch (ch)
       {
       case 1:cout<<"input the elemenet"<<endl;
        cin>>val;
        push(val);
           break;

        case 2: pop();
        break;

        case 3:cout<<"Stack is"<<endl;
        display();
        break;

       default:
           break;
       }
   } while (ch!=size-1);
   



    return 0;
}