// STATIC LIST INSERTION AND DELETION

#include<iostream>
#define MAX 10
using namespace std;

class List{
int arr[MAX];
int size = 0;
public:

// insertion
void insertAtIndex(){
     int temp,n,pos;
     cout<<"Enter the position : ";
     cin>>pos;
    cout<<"Enter the value : ";
    cin>>temp;
    if(size == 0)
    {
        arr[0] = temp;
        size++;
    }else{
        
        for (int i = size; i > pos; i--)
        {
            temp = arr[i];
            arr[i+1] = temp;            
        }
        arr[pos] = temp;
        size++;
    }
}

// Deletion
void removeAtIndex(){
    int temp,n,pos;
    cout<<"Enter the position to remove : ";
    cin>>pos;
    cout<<arr[pos]<<" is removed "<<endl;
    n = sizeof(arr)/sizeof(int);
    for (int i = pos; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    
}

// Display Function
void traverse(){
 
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

};





int main(){
    
List obj;
int choice;
bool run = true;
cout<<"Enter the option below : "<<endl;

cout<<"1. Insert at Index "<<endl;
cout<<"2. Remove from Index "<<endl;
cout<<"3. Display "<<endl;
cout<<"4. Exit "<<endl;
while(run)
{
    cout<<"Enter your Choice : ";
    cin>>choice;
    switch (choice)
    {
    case 1:
    obj.insertAtIndex();
    break; 

    case 2:
    obj.removeAtIndex();   
    break;

    case 3:
    obj.traverse();
    break;


    case 4:
    run = false;    
    break;
    
    default:
    continue;
    break;
    }
}


return 0;
}