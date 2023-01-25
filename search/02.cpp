
// binary search
#include<iostream>
using namespace std;

int search(int arr[],int high,int low,int n){
int mid;
while(low <= high)
{
    mid = (high+low)/2;

    if(arr[mid] == n)
    {
        return mid;
    }
    if(arr[mid] < n)
    {
        low = mid +1;
    }else{
        high = mid -1;
    }
   
}
 return -1;
}

int main(){
int n;
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
cout<<"Enter the no to search : ";
cin>>n;
int s = search(arr,10,0,n);
if(s == -1){
    cout<<"Number not found "<<endl;
}else{
    cout<<"Number found at "<< s <<endl;

}
return 0;
}