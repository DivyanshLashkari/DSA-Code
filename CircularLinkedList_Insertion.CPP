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

struct node*insertAtFirst(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head->next;
    
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
};

struct node*inBetween(struct node*head,int data,int index)
{
    struct node*p=new node;
    p->data=data;
    struct node*ptr=head;
    int i=0;
    while(i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
    p->next=ptr->next;
    ptr->next=p;
    return head;

};

struct node*insertAtEnd(struct node*head,int data)
{
    struct node*ptr=head;
    struct node*p=new node;
    p->data=data;
    do
    {
        ptr=ptr->next;
    }while(ptr->next!=head);
    ptr->next=p;
    p->next=head;
    return head;
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
    //Insertion Case1:At first
    cout<<"After insertion at First:"<<endl;
    head=insertAtFirst(head,100);
    traversal(head);
    //Insertion Case2:In between
    cout<<"After Insertion in between"<<endl;
    head=inBetween(head,110,3);
    traversal(head);
    //Insertion Case3:At the end
    cout<<"After Insertion at the end"<<endl;
    head=insertAtEnd(head,120);
    traversal(head);
return 0;
}