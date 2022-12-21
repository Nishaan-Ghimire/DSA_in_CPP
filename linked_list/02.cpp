// Insertion in linked list

#include<iostream>
#include<stdlib.h>
using namespace std;
// Creating a self referencing node
struct node
{
    int value;
    struct node *next;
};

// Function for linked list traversal
void linkedlistTraversal(struct node * ptr)
{
    while (ptr != NULL)
    {
    cout<<"Element : "<<ptr->value<<endl;
    ptr = ptr->next;             
    }
    
}

// Function for inserting at first
struct node * InsertAtFirst(struct node * head,int data)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->value = data;
    ptr->next = head;
    return ptr;
}

// Function for inserting in between
struct node * InsertAtIndex(struct node * head,int data, int index)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;
    while(i!= index-1)
    {
     p = p->next;
     i++;   
    }
    ptr->value = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Function for inserting in end

void InsertAtEnd(struct node *head,int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    while(p->next != NULL)
    {
        p = p->next;       
    }
    ptr->value = data;
    p->next = ptr;
    ptr->next = NULL;


}

// Function for inserting after node

void InsertAfterNode(struct node *prevNode,int data)
{
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr->next = prevNode->next;
    ptr->value = data;
    prevNode->next = ptr;

}

int main()
{
    // Creating and allocating memory for linked list
struct node *head,*second,*third;
head = (struct node *) malloc(sizeof(struct node));
second = (struct node *) malloc(sizeof(struct node));
third = (struct node *) malloc(sizeof(struct node));

// inserting and linking the link list
head->value = 4;
head->next = second;

second->value = 7;
second->next = third;

third->value - 5;
third->next = NULL;


linkedlistTraversal(head);
cout<<"----------------------------"<<endl;
head = InsertAtFirst(head,23);

linkedlistTraversal(head);
cout<<"----------------------------"<<endl;
head = InsertAtIndex(head,23,1);
linkedlistTraversal(head);
cout<<"----------------------------"<<endl;
InsertAtEnd(head,45);
cout<<"----------------------------"<<endl;
InsertAfterNode(second,66);
linkedlistTraversal(head);
cout<<"----------------------------"<<endl;

return 0;
}