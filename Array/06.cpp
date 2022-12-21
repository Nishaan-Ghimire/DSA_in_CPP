#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int element)
{

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        return i;
    
    }
    return -1;
}

int binarySearch(int arr[],int size,int element)
{
int high = size-1,low = 0,mid;
cout<<"Size :: "<<size<<endl;
while(low<=high)
{
    mid = (high+low)/2;
    if(arr[mid] == element)
    {
        return mid;
    }
    if(element > arr[mid])
    {
        low = mid+1;
        cout<<"low : "<<low<<" high : "<<high<<endl;
    }else{
        high = mid -1;
        cout<<"low : "<<low<<" high : "<<high<<endl;
    }
}
return -1;

}
int main(){
// int a[20] = {2,4,67,98,23,12,54};
// int size = sizeof(a)/sizeof(int);
// int element = 12;

// int returnIndex = linearSearch(a,size,element);
// cout<<"The element is found at index : "<<returnIndex<<endl;


int a[] = {2,4,23,45,69,90};
int size = sizeof(a)/sizeof(int);
int element = 69;

int returnIndex = binarySearch(a,size,element);
cout<<"The element is at index : "<<returnIndex<<endl;

return 0;
}