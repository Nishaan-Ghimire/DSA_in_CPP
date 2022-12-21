#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int value;
    struct node* next;
};

void linkTraversal(struct node* ptr){


    do{
        cout<<ptr->value<<"\t";
        ptr = ptr->next;

    } while(ptr != NULL);
}


struct node * insertFront(struct node * ptr,int data){
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->next = ptr;
    temp->value = data;
    return temp;
}


struct node * insertIndex(struct node * head,int data, int index)
{
struct node *temp = (struct node *) malloc(sizeof(struct node));
struct node *ptr = (struct node *) malloc(sizeof(struct node));
ptr = head;
int i = 1;
while(i != index-1)
{
        ptr= ptr->next;
        i++;
}
temp->value = data;
temp->next = ptr->next;
ptr->next = temp;

return head;

}


struct node *insertEnd(struct node* head,int data)
{
struct node *temp = (struct node *)malloc(sizeof(struct node));
struct node *ptr = head;

while (ptr->next != NULL)
{
    ptr = ptr->next;

}
temp->value = data;
ptr->next = temp;
temp->next = NULL;
    return head;

}


struct node * insertAfterNode(struct node * h,struct node * node,int data)
{
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->value = data;
    temp->next = node->next;
    node->next = temp;
    return h;
    
}





int main(){

   struct node * head, * second, * third;
   head = (struct node*) malloc(sizeof(struct node));
   second = (struct node*) malloc(sizeof(struct node));
   third = (struct node*) malloc(sizeof(struct node));


/* Linked list using c++ 
 head = new struct node[1];
 second = new struct node[1];
 third = new struct node[1];
*/


   // Linking the list and adding value

   head->value = 5;
   head->next = second;
   second->value = 6;
   second->next = third;
   third->value = 7;
   third->next = NULL;

   cout<<endl<<"Before insertion"<<endl;
   linkTraversal(head);
   head = insertAfterNode(head,second,69);
   cout<<endl<<"After insertion"<<endl;
   linkTraversal(head);
   cout<<endl;


return 0;
}