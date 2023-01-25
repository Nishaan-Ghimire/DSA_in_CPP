#include<iostream>
using namespace std;
void sort(int arr[], int n){
    int temp, leastNoIndex;
    for (int i = 0; i < n; i++)
    {
        leastNoIndex = i;
        for (int j = i; j < n; j++)
        {
            if(arr[leastNoIndex] > arr[j])
            {
                leastNoIndex = j;
            }
        }
        temp = arr[leastNoIndex];
        arr[leastNoIndex] = arr[i];
        arr[i] = temp;
        
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