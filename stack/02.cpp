// Push(), Pop(), isEmpty() and isFull() Operations in Stack Using an Array

#include<iostream>
#include<stdlib.h>
using namespace std;

class Stack{
int top;
int max;
int *arr = new int[max];

public:
Stack(){
top = -1;
max = 10;    
}
Stack(int x){
max = x;
top = -1;
}

bool push(int data)
{
    if(top >= max-1)
    {
        cout<<"Stack is full"<<endl;
        return false;
    }else{

        top++;
        arr[top] = data; 
        return true;
    }
    return false;
}


bool pop()
{
    if(top <= -1)
    {
        cout<<"Stack is empty"<<endl;
        return false;
    }else{

        cout<<arr[top]<<" is poped out"<<endl;
        top--;
        return true;

    }
    return false;
}


void display(){
    for (int i = 0; i <= top; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
}



bool isEmpty(){
    if(top <= -1)
    return true;
    else
    return false;
}
bool isFull(){
    if(top >= max-1)
    return true;
    else
    return false;
}

};


int main(){
    Stack s(5);
    int data,choice;
    cout<<"Operations :"<<endl;
    cout<<"1. Push "<<endl;
    cout<<"2. Pop "<<endl;
    cout<<"3. Display "<<endl;
    cout<<"4. Check if full "<<endl;
    cout<<"5. Check if empty "<<endl;
    cout<<"6. exit "<<endl;

while (1)
{
  cout<<"Enter your choice : ";
  cin>>choice;


  switch (choice)
  {
  case 1:
    cout<<"Enter data : ";
    cin>>data;
    s.push(data);
    break;
  
  case 2:
    s.pop();
    break;
  
  case 3:
    s.display();
    break;
  
  case 4:
  if(s.isFull())
  cout<<"Stack is full"<<endl;
  else
  cout<<"Stack is not full"<<endl;
    
    break;
  case 5:
     if(s.isEmpty())
  cout<<"Stack is Empty"<<endl;
  else
  cout<<"Stack is not Empty"<<endl;
    break;
  
  case 6:
    exit(0);
    break;
  
  default:
    break;
  }
}
    return 0;
}