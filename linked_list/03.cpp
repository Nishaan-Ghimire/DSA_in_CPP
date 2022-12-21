// Deletion  in linked list
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


// Delete First Element
struct node * deleteFirst(struct node *head){
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Delete given Index element
struct node * deleteIndex(struct node *head,int index){
    struct node *ptr = head;
    struct node *temp;
    int i = 1;
    while(1 != index-1)
    {
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = ptr->next->next;
    free(temp);
    return head;
}


// Delete last element
struct node * deleteLast(struct node *head)
{
    struct node *ptr = head;
    struct node *temp;
    while(ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = NULL;
    return head;
    
}


// Delete After node
struct node * deleteAfterNode(struct node *head,struct node *node)
{
   struct node *temp;
   temp = node->next; 
   node->next = node->next->next;
   free(temp);
   return head;
}


 int main(){
   
   // Linked list using c
   struct node * head, * second, * third, * fourth;
   head = (struct node*) malloc(sizeof(struct node));
   second = (struct node*) malloc(sizeof(struct node));
   third = (struct node*) malloc(sizeof(struct node));
   fourth = (struct node*) malloc(sizeof(struct node));


   // Linking the list and adding value

   head->value = 5;
   head->next = second;
   second->value = 6;
   second->next = third;
   third->value = 7;
   third->next = fourth;
   fourth->value = 8;
   fourth->next = NULL;
   cout<<endl<<"Before insertion"<<endl;
   linkedlistTraversal(head);
   head = deleteAfterNode(head,second);
   cout<<endl<<"After insertion"<<endl;
   linkedlistTraversal(head);
 return 0;
 }