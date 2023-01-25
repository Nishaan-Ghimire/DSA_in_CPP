
#include<iostream>
using namespace std;
 #define MAXSIZE 10
class Stack{
public:
char stack[MAXSIZE],data,top=-1;


void push(char x){
    if(top == MAXSIZE - 1)
    {
        cout<<"Stack overflow"<<endl;
    }else{
        
        top++;
        stack[top] = x;
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
        // cout<<"poped element : "<<data<<endl;
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

bool empty(){
    if(top == -1)
    return true;
    else
    return false;
    }

char Top(){

    return stack[top];
}
};








// Function to return precedence of operators
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
 

void infixToPostfix(string s)
{
 
    Stack st; // For stack operations, we are using
                    // C++ built in stack
    string result;
 
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
 
        // If the scanned character is
        // an operand, add it to output string.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9'))
            result += c;
 
        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (c == '(')
            st.push('(');
 
        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if (c == ')') {
            while (st.Top() != '(') {
                result += st.Top();
                st.pop();
            }
            st.pop();
        }
 
        // If an operator is scanned
        else {
            while (!st.empty()
                   && prec(s[i]) <= prec(st.Top())) {
                result += st.Top();
                st.pop();
            }
            st.push(c);
        }
    }
 
    // Pop all the remaining elements from the stack
    while (!st.empty()) {
        result += st.Top();
        st.pop();
    }
 
    cout << result << endl;
}
 
// Driver's code
int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
 
    // Function call
    infixToPostfix(exp);
    return 0;
}
