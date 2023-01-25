// Linear Search
#include<iostream>
using namespace std;
#define ARRAY_SIZE 10
int search(int arr[],int n,int number)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == number)
        return i;
    }
     cout<<"Element is not found in given array "<<endl;
    return -1;
   
    
}
int main(){
int n,index;
int arr[ARRAY_SIZE] = {12,23,18,78,45,68,32,11,90,56};
cout<<"Enter the no to search : ";
cin>>n;
index = search(arr,ARRAY_SIZE,n);
if(index == -1)
{
   return 0;
}
cout<<"GIVEN ELEMENT IS AT INDEX "<<index<<endl;



return 0;
}