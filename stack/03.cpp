// Implementing infix to postFix

#include<iostream>
using namespace std;
#define MAX 5
struct precedenceValue{
char op;
int value;
};

class Stack{
private:
char arr[MAX],top = -1;
public:
void push(char data){
if(top >= MAX-1)
{
    cout<<"Stack is full"<<endl;
}else{
    top++;
    arr[top] = data;
}
}

char pop(){
    if(top <= -1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
    return arr[top];
    top--;

        // cout<<arr[top]<<" is popped"<<endl;
    }
    return '0';
}


void display(){
    for (int i = 0; i <= top; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
}



    
};
int main(){

    Stack s;
struct precedenceValue p[5] = {{'*',4}
                              ,{'*',3},
                               {'/',3},
                               {'+',2},
                               {'-',2}};


char infix_str[10] = "a*b+c";
char post_fix[10] = ""; 
int strLength = 5;
int i = 0,k = 0;
int precedenceValue = 0;
int preprecedenceValue = 0;

while(i < 5)
{

if(infix_str[i] == '*' || infix_str[i] == '*' || infix_str[i] == '/' || infix_str[i] == '+' || infix_str[i] == '-' ){
for (int j = 0; j < 5; j++)
{   
    if(infix_str[i] == p[j].op)
    {
        precedenceValue = p[j].value;
        break;
    }
}
if(precedenceValue > preprecedenceValue)
{
//     cout<<"here"<<endl;
// cout<<infix_str[i]<<endl;
s.push(infix_str[i]);
    s.display();

preprecedenceValue = precedenceValue;
}else if(precedenceValue > preprecedenceValue){
   if(s.pop() != '0'){
    post_fix[k] = s.pop();
    k++;
   }

}else{
    
    while(post_fix[i] != '0')
    {
        post_fix[k] = s.pop();
        k++;
    }
}
  }
else{

post_fix[k] = infix_str[i];
k++;
}


i++;


}

cout<<endl<<"The post fix expression is : "<<post_fix<<endl;
return 0;
}