#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
    int value;
    struct node *previous;
    struct node *next;
};

void frontTravel(struct node *head)
{
    struct node *temp = head;
do{
    cout<<temp->value<<"\t";
    temp = temp->next;
    
}while(temp != NULL);

cout<<endl;
}


void lastTravel(struct node *last)
{
    struct node *temp = last;
    do{
        cout<<temp->value<<"\t";
        temp = temp->previous;
    }while(temp != NULL);
cout<<endl;
}


// Add Insertion and Deletion code later


int main(){

struct node *head,*first,*second,*third,*fourth;
first = new struct node[1];
second = new struct node[1];
third = new struct node[1];
fourth = new struct node[1];
head = first;
first->previous = NULL;
first->value = 4;
first->next = second;

second->previous = first;
second->value = 5;
second->next = third;

third->previous = second;
third->value = 6;
third->next = fourth;

fourth->previous = third;
fourth->value = 7;
fourth->next = NULL;


cout<<"From first  :"<<endl;
frontTravel(head);
cout<<"From last  :"<<endl;
lastTravel(fourth);

return 0;
}