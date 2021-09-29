#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;


struct Node
{ int data;
 struct Node*next;
 };


void LinkedListTraversal(struct Node*ptr)
{
 while(ptr!=NULL)
 {
 cout<<"Element is; "<<ptr->data<<endl;
 ptr=ptr->next;
 }
};


struct Node*deleteHead(struct Node*head)
{
    struct Node*ptr=head;
    ptr->next=head->next;
    head=head->next;
    free(ptr);
    return head;
}


struct Node*deleteAtIndex(struct Node*head,int index)
{
    struct Node*p=head;
    struct Node*q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
    
};


struct Node*deleteEnd(struct Node*head)
{
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}


struct Node*deleteValue(struct Node*head,int value)
{
    struct Node*p=head;
    struct Node*q=head->next;

    while(q->data!=value && q->next!=NULL)
    {
       p=p->next;
       q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
     return head;
}


int main()
{

//Memory Allocation
struct Node *head=(struct Node*)malloc(sizeof(struct Node));
struct Node *second=(struct Node*)malloc(sizeof(struct Node));
struct Node *third=(struct Node*)malloc(sizeof(struct Node));
struct Node *fourth=(struct Node*)malloc(sizeof(struct Node));
struct Node *fifth=(struct Node*)malloc(sizeof(struct Node));
struct Node*sixth=new Node;
struct Node*seventh=new Node;
struct Node*eighth=new Node;

//linking first node to second
head->data=10;
head->next=second;
//linking 2nd node to 3rd
second->data=20;
second->next=third;

third->data=30;
third->next=fourth;

fourth->data=40;
fourth->next=fifth;

fifth->data=50;
fifth->next=sixth;

sixth->data=60;
sixth->next=seventh;

seventh->data=70;
seventh->next=eighth;

eighth->data=80;
eighth->next=NULL;


head=deleteHead(head);
cout<<"Case 1:Deletion of head"<<endl;
LinkedListTraversal(head);

head=deleteAtIndex(head,2);
cout<<"Case 2:Deletion at index"<<endl;
LinkedListTraversal(head);

head=deleteEnd(head);
cout<<"Case 3:Deletion of end"<<endl;
LinkedListTraversal(head);

head=deleteValue(head,50);
cout<<"Case 4:Deletion of value"<<endl;
LinkedListTraversal(head);

return 0;
}
