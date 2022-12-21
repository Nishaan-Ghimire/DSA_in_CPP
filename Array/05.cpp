// Deletion operation in array

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


// Deletion function
int Delete(int arr[],int size,int index)
{

    for (int i = index-1; i <= size-1; i++)
    {
        arr[i] = arr[i+1];        
    }
   

    return 1;
}
int main(){
int a[8] = {1,2,3,4,4,6};
int size = 6,index;
display(a,size);

cout<<"Enter the position : ";
cin>>index;
Delete(a,size,index);
--size;
display(a,size);
return 0;
}