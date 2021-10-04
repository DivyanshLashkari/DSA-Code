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

struct node*deleteFirst(struct node*head)
{
    struct node*ptr=head;
    head=head->next;
    ptr->next=NULL;
    free(ptr);
    return head;

};

struct node*deleteInBetween(struct node*head,int index)
{
    struct node*p=head;
    struct node*q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;

    
};

struct node*deleteEnd(struct node*head)
{
    struct node*p=head;
    struct node*q=head->next;
    while(q->next!=NULL)
    {
        q=q->next;
        p=p->next;
    }
    p->next=NULL;
    free(q);
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

    //Deletion at First
    head=deleteFirst(head);
    cout<<"Deletion at First"<<endl;
    traversal(head);

    //Deletion in Between
    head=deleteInBetween(head,2);
    cout<<"Deletion in Between"<<endl;
    traversal(head);

    //Deletion at End
    head=deleteEnd(head);
    cout<<"Deletion at End"<<endl;
    traversal(head);

    return 0;
}