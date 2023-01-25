// Insertion sort
#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
    int i,j,key;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i -1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
    
}


void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}


int main(){
    int n = 10;
int arr[10] = {62,4,6,2,9,5,12,54,22,1};
cout<<"Before Sorting : ";
display(arr,n);
cout<<endl<<"After Sorting : ";
insertionSort(arr,n);
display(arr,n);
cout<<endl;
    
    return 0;
}


// void insertionSort(int arr[],int n)
// {
//     int i,j,key;
//     for (int i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while(j >= 0 && arr[j] > key)
//         {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
    
// }