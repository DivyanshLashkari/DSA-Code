#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
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
int main()
{
clrscr();
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

fifth->data=12;
fifth->next=NULL;
//printing the values
LinkedListTraversal(head);
getch();
return 0;
}
