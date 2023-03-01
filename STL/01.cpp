#include<iostream>
using namespace std;
template <class T>
class num{
public:
T a;
T b;
num(T a, T b)
{
    this->a = a;
    this->b = b;
}

T sum(){
return a+b;
}
};
int main(){
num <int>obj(2,3);
cout<<"The sum is : "<<obj.sum()<<endl;
return 0;
}