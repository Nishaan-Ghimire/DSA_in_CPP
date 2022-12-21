#include<iostream>
#define MAXSIZE 10

using namespace std;
class stack{
private:
int stack[MAXSIZE],data,top=-1;

public:
void push(){
    if(top == MAXSIZE - 1)
    {
        cout<<"Stack overflow"<<endl;
    }else{
        cout<<"Enter the data : ";
        cin>>data;
        top++;
        stack[top] = data;
        cout<<endl;
    }
}

void pop(){
    if(top == -1)
    {
        cout<<"Stack underflow";
        cout<<endl;
    }else{
        data = stack[top];
        cout<<"poped element : "<<data<<endl;
        top--;
    }
}

void display(){
    if(top == -1)
    {
        printf("Stack is empty");
    }

    else{
        cout<<"Elements in stack are : "<<endl;
        for (int i = 0; i <= top; i++)
        {
        cout<<stack[i]<<"\t"<<endl;
        }
        
    }
}

};
int main(){
stack s;

int choice;
cout<<"1. push "<<endl;
cout<<"2. pop "<<endl;
cout<<"3. display "<<endl;
cout<<"4. exit "<<endl;
while (1)
{
    cout<<"Enter your choice : ";
cin>>choice;
switch (choice)
{
case 1:
    s.push();
    break;  
case 2:
    s.pop();
    break;  
case 3:
    s.display();
    break;  

default:
    break;
}
}


return 0;
}



