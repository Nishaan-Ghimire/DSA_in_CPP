#include<iostream>
using namespace std;
void sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    
}

void display(int arr[], int n){
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
sort(arr,n);
display(arr,n);
cout<<endl;
return 0;
}