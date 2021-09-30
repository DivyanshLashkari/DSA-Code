#include<iostream>
#include<conio.h>
#include<malloc.h>
using namespace std;
struct node
{
    int data;
    struct node*next;
};

void traversal(struct node*head)
{
    struct node*ptr=head;
    do
    {
        cout<<"Element is: "<<ptr->data<<endl;
        ptr=ptr->next;
    } while (ptr!=head);
    
};


int main()
{
    //Memory Allocation
    struct node*head=new node;
    struct node*second=new node;
    struct node*third=new node;
    struct node*fourth=new node;
    struct node*fifth=new node;
    struct node*sixth=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=fifth;

    fifth->data=50;
    fifth->next=sixth;

    sixth->data=60;
    sixth->next=head;

    //printing the values
    traversal(head);
    
return 0;
}