// Self Tried code for implementing Abstract data type

#include<iostream>
using namespace std;
// Creating Abstract data type using structure
struct myArray
{
int total_size = 6;
int used_size;
int* base_address = new int[total_size];
} arr;

// main code
int main(){
int j;
cout<<"Enter the used size : ";
cin>>arr.used_size;
cout<<"Enter numbers : "<<endl;
for (int j = 0; j < arr.used_size; j++)
{
    cin>>arr.base_address[j];
}
cout<<"Total size : "<<arr.total_size<<endl;
cout<<"Used size : "<<arr.used_size<<endl;
cout<<"Elements : ";
for (size_t j = 0; j < arr.used_size; j++)
{
    cout<<arr.base_address[j]<<"\t";
}
cout<<endl;

return 0;
}