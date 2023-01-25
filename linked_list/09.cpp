#include<iostream>
using namespace std;
class node{
public:
node * previous;
node * next;
int value;
};

node* head = NULL;
node* tail = NULL;


// Function to add node at beginning
void add(){
node * temp = new node();
node * ptr;
cout<<"Enter the value : ";
cin>>temp->value;
if(head == NULL)
{
head = temp;
temp->previous = NULL;
temp->next = NULL;
tail = temp;    

}
temp->next = head;
head->previous = temp;
head = temp;
tail->next = NULL;
}



void traverse(){
   
node * ptr;
ptr = head;

    if(ptr == NULL)
    {
        cout<<"List is empty"<<endl;
    }else{
    while(ptr != NULL)
    {
        
      
        cout<<ptr->value<<"\t";
        ptr = ptr->next;
       
    }
    cout<<endl;
    }

}


int main(){
add();
add();
add();
traverse();
return 0;
}