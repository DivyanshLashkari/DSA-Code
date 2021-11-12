#include<iostream>
using namespace std;
#define SIZE 5

int arr[SIZE];
int front=-1;
int rear=-1;

void enqueue(int value)
{
    if(rear==SIZE-1)
    cout<<"Overflow!!!"<<endl;
    else{
        if(front==-1)
        front=0;
        rear++;
        arr[rear]=value;
    }
};

void dequeue()
{
    if(front==-1&&rear==-1)
    cout<<"Underflow!!!"<<endl;
    else{
        if(front==rear)
        front=rear=-1;
        front++;
    }
};

void display()
{
    if(front==-1&&rear==-1)
    cout<<"Empty Queue"<<endl;
    else{
    for(int i=front;i<=rear;i++)
    cout<<arr[i]<<"-->";}
    cout<<endl;
};

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();
    
    dequeue();
    cout<<"Queue after dequeue"<<endl;
    display();

    dequeue();
    cout<<"Queue after dequeue"<<endl;
    display();

    dequeue();
    cout<<"Queue after dequeue"<<endl;
    display();

    dequeue();
    cout<<"Queue after dequeue"<<endl;
    display();

    dequeue();
    cout<<"Queue after dequeue"<<endl;
    display();

    dequeue();
    cout<<"Queue after dequeue"<<endl;
    display();
}