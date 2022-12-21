#include<iostream>
using namespace std;

struct myArray{
    int totalSize;
    int usedSize;
    int *ptr = new int[totalSize];
} arr;


int main()
{
    cout<<"Enter total space that may be required : ";
    cin>>arr.totalSize;
    cout<<"Enter needed space : ";
    cin>>arr.usedSize;
    cout<<"Space allocated";
}