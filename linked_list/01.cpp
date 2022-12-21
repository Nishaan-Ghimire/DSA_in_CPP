// Creation and Traversal of Linked list
 #include<iostream>
 #include<stdlib.h>
 using namespace std;
 struct node{
    int value;
    struct node *next;
 };


//  Linked list Traversal function

void linkedlistTraversal(struct node *ptr)
{
while(ptr != NULL)
{
cout<<"Element : "<<ptr->value<<endl;
   ptr = ptr->next; //changing pointer to next element
}
}
 int main(){
   
   // Linked list using c

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

   linkedlistTraversal(head);
 return 0;
 }