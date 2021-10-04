#include<iostream>
#include<conio.h>
#include<malloc.h>
using namespace std;

struct node
{
    int data;
    struct node*prev;
    struct node*next;
};

void traversal(struct node*head)
{
    struct node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<"Element is:"<<ptr->data<<endl;
        ptr=ptr->next;
    }
};

void reverseTraversal(struct node*sixth)
{
    struct node*ptr=sixth;
    cout<<"Reverse Traversing"<<endl;
    while(ptr!=NULL)
    {
        cout<<"Element is: "<<ptr->data<<endl;
        ptr=ptr->prev;
    }
};

int main()
{
    struct node*head=new node;
    struct node*second=new node;
    struct node*third=new node;
    struct node*fourth=new node;
    struct node*fifth=new node;
    struct node*sixth=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->prev=NULL;
    head->next=second;

    second->data=20;
    second->prev=head;
    second->next=third;

    third->data=30;
    third->prev=second;
    third->next=fourth;

    fourth->data=40;
    fourth->prev=third;
    fourth->next=fifth;

    fifth->data=50;
    fifth->prev=fourth;
    fifth->next=sixth;

    sixth->data=60;
    sixth->prev=fifth;
    sixth->next=NULL;

    traversal(head);
    reverseTraversal(sixth);

    return 0;
}