// Insertion and Deletion in linked list using c++

#include<iostream>
using namespace std;

// Creating node class
class node{
public:
int value;
node *next;
};


// Creating head pointer
node* head = NULL;


// Function to add node at beginning
void addAtFirst(){
node * temp = new node();
cout<<"Enter the value : ";
cin>>temp->value;
temp->next = head;
head = temp;
}


// Function to add node at given index
void addAtIndex(int n)
{
    node * temp = new node();
    cout<<"Enter the value : ";
    cin>>temp->value;
    node * ptr;
    ptr = head;
    int i = 0;
    while(i < n-1){
    i++;
    ptr = ptr->next;
    }

    temp->next = ptr->next;
    ptr->next = temp;
}

// Add node at end
void addAtEnd()
{
node * ptr,*temp = new node();
ptr = head;
cout<<"Enter the value : ";
cin>>temp->value;
while (ptr->next != NULL)
{
    ptr= ptr->next;
}
ptr->next = temp;

}

// Delete node from First
void removeAtFirst(){
    node *temp  = new node();
    temp = head;
    head = temp->next;
    cout<<temp->value<<" is removed from first"<<endl;
    delete temp;
}

// Delete node from given Index
void removeAtIndex(int n){
    node *temp = new node(),*ptr;
    ptr = head;
    int i = 0;
    while (i < n-1)
    {
      i++;
      ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = temp->next;
    cout<<temp->value<<" is removed"<<endl;

delete temp;
}

// Delete node from Last
void removeAtLast(){
node *temp = new node(),*ptr;
ptr = head;
while(ptr->next->next != NULL)
{
    ptr = ptr->next;   
}
temp = ptr->next;
ptr->next = NULL;
cout<<temp->value<<" is removed"<<endl;
delete temp;
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
int choice,pos;
bool run = true;
cout<<"Enter the option below : "<<endl;
cout<<"1. Insert at first "<<endl;
cout<<"2. Insert at Index "<<endl;
cout<<"3. Insert at Last "<<endl;
cout<<"4. Remove from first "<<endl;
cout<<"5. Remove from Index "<<endl;
cout<<"6. Remove from Last "<<endl;
cout<<"7. Display List "<<endl;
cout<<"8. Exit "<<endl;
while(run)
{
    cout<<"Enter your Choice : ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        addAtFirst();
    break; 

    case 2:
    cout<<"Enter the Position : ";
    cin>>pos;
    addAtIndex(pos);
    break;

    case 3:
    addAtEnd();   
    break;

    case 4:
    removeAtFirst();  
    break;

    case 5:
    cout<<"Enter the Position : ";
    cin>>pos;
    removeAtIndex(pos);   
    break;

    case 6:
    removeAtLast();   
    break;
    case 7:
    traverse();   
    break;
    case 8:
    run = false;    
    break;
    
    default:
    continue;
        break;
    }
}


return 0;
}