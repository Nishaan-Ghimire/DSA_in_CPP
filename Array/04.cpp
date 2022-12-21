// Insertion operation in array

#include<iostream>
using namespace std;

// Traversal function
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
}


// Insertion function
int insert(int arr[],int size,int maxsize,int number,int index)
{
if(index <= 0)
{
    return -1;
    cout<<"Please use regular counting start from 1 not from zero"<<endl;
}else if(size >= maxsize)
{
    return -1;
    cout<<"Sorry element cannot be inserted . Array is full !!"<<endl;
}else{


    for (int i = size-1; i >=index-1; i--)
    {
        arr[i+1] = arr[i];        
    }
    arr[index -1] = number;
}
    return 1;
}
int main(){
int a[8] = {1,2,3,4,4,6};
int size = 6,maxsize = 8, number,index;
display(a,size);
cout<<"Enter the number you want to insert : ";
cin>>number;
cout<<"Enter the position : ";
cin>>index;
insert(a,size,maxsize,number,index);
insert(a,size,maxsize,number,index);
insert(a,size,maxsize,number,index);
size++;
display(a,size);
return 0;
}