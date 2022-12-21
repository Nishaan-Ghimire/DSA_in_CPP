#include<iostream>
#include<stdlib.h>
using namespace std;
// Abstract data type implementation in C
struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

// Method defination
void createArray(struct myArray* a,int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int*) malloc(tSize*sizeof(int));
}

void show(struct myArray *a)
{
    for (size_t i = 0; i < a->used_size; i++)
    {
        cout<<a->ptr[i]<<endl;
    }
    
}

void setVal(struct myArray *a)
{

    for (size_t i = 0; i < a->used_size; i++)
    {
        cout<<"Enter "<<i<<" element : ";
        cin>>a->ptr[i];
    }
    
}


int main(){
struct myArray marks;
createArray(&marks,100,5);
setVal(&marks);
show(&marks);
return 0;
}