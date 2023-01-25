#include<iostream>
#define MAX 5
using namespace std;

class Queue{
    int rear = -1,front = -1,a[MAX];
public:



// Enqueue operation in queue
void enqueue(int x){
if(rear == MAX-1)
{
    cout<<"Queue is full!!"<<endl;
}
else{
if(rear == -1 && front == -1)
{
    front = rear = 0;

}
else
{
    rear++;
}
a[rear] = x;
cout<<a[rear]<<" is inserted at "<< rear <<endl;
}
}

// Dequeue operation in queue
void dequeue()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else{

     if(front == rear){
        cout<<"The element you want to remove is : "<<a[front]<<endl;
        front = rear = -1;
    
     }else{

        cout<<"The element you want to remove is : "<<a[front]<<endl;
        front++;
     }

    
    }
}

// Display function
void display(){
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }else{
        for (int i = front; i <= rear; i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl; 
    
    }
    
}
};



int main(){

Queue queue;
queue.enqueue(5);
queue.display();
queue.enqueue(3);
queue.display();
queue.enqueue(6);
queue.display();
queue.enqueue(8);
queue.display();
queue.enqueue(9);
queue.display();
queue.enqueue(9);
queue.display();
queue.dequeue();
queue.display();
queue.dequeue();
queue.display();
queue.dequeue();
queue.display();
queue.dequeue();
queue.display();
queue.dequeue();
queue.display();


return 0;
}