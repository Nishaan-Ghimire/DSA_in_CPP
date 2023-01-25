// Implementing stack in c++

#include<iostream>
#define MAX 5
using namespace std;
class Stack{
int arr[MAX];
int top = -1;        
public:
void push(int n){
    if(top >= MAX){
        cout<<"Stack is Full"<<endl;
    }else{
        top++;
        arr[top] = n;
    }
}

void pop(){
if(top <= -1)
{
    cout<<"Stack is empty"<<endl;
}else{
    cout<<arr[top]<<" is poped"<<endl;
    top--;
}

}

void display(){
    for (int i = 0; i < top; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};

int main(){
Stack s;
s.push(1);
s.display();
s.push(2);
s.display();
s.push(3);
s.display();
s.push(4);
s.display();
s.push(5);
s.display();
s.pop();
s.display();
s.pop();
s.display();
s.pop();
s.display();
s.pop();
s.display();
return 0;
}