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

struct node*insertAtFirst(struct node*head,int data)
{
    struct node*ptr=new node;
    ptr->data=data;
    ptr->prev=NULL;
    ptr->next=head;
    head=ptr;
    return head;

};

struct node*insertInBetween(struct node*head,int data,int index)
{
    struct node*ptr=new node;
    ptr->data=data;
    struct node*p=head;
    struct node*q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=ptr;
    ptr->prev=p;
    ptr->next=q->next;
    return head;
    
};

struct node*insertAtEnd(struct node*head,int data)
{
    struct node*ptr=new node;
    ptr->data=data;
    ptr->next=NULL;
    struct node*p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    return head;

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

    //Insertion at First
    cout<<"Insertion at First"<<endl;
    head=insertAtFirst(head,70);
    traversal(head);

     //Insertion in Between
    cout<<"Insertion in Between"<<endl;
    head=insertInBetween(head,70,3);
    traversal(head);

      //Insertion at End
    cout<<"Insertion in End"<<endl;
    head=insertAtEnd(head,70);
    traversal(head);

    return 0;
}