
// Fibonacci series using recursion
#include<iostream>
using namespace std;

int recursion(int n){
    // cout<<"special : "<<n<<endl;
    if(n == 0 || n == 1)
    {
        // cout<<"hi"<<n<<endl;
    return 1;
    }

    else{
    return(recursion(n-1) + recursion(n-2));
    }


}

int main(){
int i = 0,no;
cout<<"Enter the no of terms to generate : "<<endl;
cin>>no;
while(i<no)
{
   cout<<recursion(i)<<" ";
i++;
}
cout<<endl;

return 0;
}