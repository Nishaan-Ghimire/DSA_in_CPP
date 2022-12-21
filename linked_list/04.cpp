#include<iostream>
 #include<stdlib.h>
using namespace std;
// Creating node;
struct node{
int value;
struct node *next;
};

void travelList(struct node *head){
struct node *temp = head;
do{
    cout<<temp->value<<"\t";
    temp= temp->next;
}while(temp != head);
cout<<endl;
}


// Write Insertion and Deletion code for Circular code








// Circular Linked list 
int main(){
struct node *head,*first,*second,*third,*fourth;

head = new struct node[1];
first = new struct node[1];
second = new struct node[1];
third = new struct node[1];
fourth = new struct node[1];

head ->value = 4;
first ->value = 5;
second ->value = 6;
third ->value = 7;
fourth ->value = 8;

head ->next = first;
first ->next = second;
second ->next = third;
third ->next = fourth;
fourth ->next = head;


travelList(head);
return 0;
}