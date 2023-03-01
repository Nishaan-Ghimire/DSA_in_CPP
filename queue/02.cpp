#include<iostream>
#define MAX 5
using namespace std;
class CircularQueue{
public: 
int arr[MAX];
int rear = -1, front = -1;


void enqueue(int x){
if(front == -1 && rear == -1)
{
   front = rear = 0;
   arr[rear] = x;
}
else if((rear+1)%MAX == front)
{
    cout<<"QUEUE IS FULL!!!"<<endl;
}else{
    rear = (rear+1)%MAX;
    arr[rear] = x;
}


}
void dequeue(){
    if(rear == -1 && front == -1)
    {
        cout<<"QUEUE IS EMPTY"<<endl;
    }else if(rear == front)
    {
        cout<<"The "<<arr[front]<<" is popped"<<endl;
        front = rear = -1;
    }else{
        cout<<"The "<<arr[front]<<" is popped"<<endl;
        front = (front+1)%MAX;
    }
}

// Display function
void display(){
int i = front;
while (1)
{
cout<<arr[front]<<"\t";
front = (front+1)%MAX;
if(front == rear)
{
cout<<arr[front]<<"\t";
    break;
}

}
}

};
int main(){

CircularQueue obj;

obj.enqueue(14);
obj.enqueue(22);
obj.enqueue(33);
obj.enqueue(45);
obj.enqueue(18);
obj.display();
return 0;
}