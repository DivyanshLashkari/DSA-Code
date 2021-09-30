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

struct node*deleteFirst(struct node*head)
{
    struct node*ptr=head;
    struct node*p=head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr->next;
    head=head->next;;
    free(ptr);
    return head;
};

struct node*deleteEnd(struct node*head)
{
    struct node*p=head;
    struct node*q=head->next;
    while (q->next!=head)
    {
        p=p->next;
        q=q->next;
    }
    p->next=head;
    free(q);
    return head;
    
    
};

struct node*deleteAtIndex(struct node*head,int index)
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
    //Deletion at First
    head=deleteFirst(head);
    cout<<"Deletion at First"<<endl;
    traversal(head);  
    //Deletion at Last
    head=deleteEnd(head);
    cout<<"Deletion at Last"<<endl;
    traversal(head);  
    //Deletion at Index
    head=deleteAtIndex(head,2);
    cout<<"Deletion at Index"<<endl;
    traversal(head);
return 0;
}