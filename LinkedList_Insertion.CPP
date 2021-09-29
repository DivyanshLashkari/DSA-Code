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
 cout<<"Element is: "<<ptr->data<<endl;
 ptr=ptr->next;
 }
};


struct Node*at_the_begining(struct Node*head,int data)
{
struct Node*ptr=new Node;
ptr->next=head;
ptr->data=data;
head=ptr;
return head;
};


struct Node*inBetween(struct Node*head,int data,int index)
{
struct Node*ptr=new Node;
struct Node*p=head;
int i=1;
while(i!=index-1)
{
p=ptr->next;
i++;
}
ptr->data=data;
ptr->next=p->next;
p->next=ptr;
return head;
};

struct Node*at_end(struct Node*head,int data)
{
struct Node*ptr=new Node;
struct Node*p=head;

while(p->next!=NULL)
{
p=p->next;
}
p->next=ptr;
ptr->next=NULL;
ptr->data=data;
return head;
};


struct Node*afterNode(struct Node*head,struct Node*prevNode,int data)
{
struct Node*ptr=new Node;
ptr->data=data;

ptr->next=prevNode->next;
prevNode->next=ptr;

return head;
};


int main()
{
//Memory Allocation
struct Node *head=(struct Node*)malloc(sizeof(struct Node));
struct Node *second=(struct Node*)malloc(sizeof(struct Node));
struct Node *third=(struct Node*)malloc(sizeof(struct Node));
struct Node *fourth=(struct Node*)malloc(sizeof(struct Node));
struct Node *fifth=(struct Node*)malloc(sizeof(struct Node));

//linking first node to second
head->data=12;
head->next=second;
//linking 2nd node to 3rd
second->data=22;
second->next=third;

third->data=62;
third->next=fourth;

fourth->data=31;
fourth->next=fifth;

fifth->data=15;
fifth->next=NULL;

//printing the values
LinkedListTraversal(head);

//insertion at the begining
head=at_the_begining(head,44);
cout<<"After Insertion of data=44 at beginning"<<endl;
LinkedListTraversal(head);

//insertion in between
head=inBetween(head,74,3);
cout<<"After insertion in between"<<endl;
LinkedListTraversal(head);

//insertion at the end
head=at_end(head,98);
cout<<"After insertion at the end"<<endl;
LinkedListTraversal(head);

//inserting after a node
head=afterNode(head,second,76);
cout<<"After insertion after a node"<<endl;
LinkedListTraversal(head);


return 0;
}
