#include <iostream>
using namespace std;

// Abstract datatype implementation by using class 
class myArray
{
private:
    int total_size, used_size;
    int *ptr;

public:
// initializing array
    myArray(int total_size, int used_size)
    {
        this->total_size = total_size;
        this->used_size = used_size;
        ptr = new int[total_size];
    }
    ~myArray()
    {
        delete ptr;
        cout<<"Memory freed"<<endl;
    }
    void display()
    {
        for (size_t i = 0; i < used_size; i++)
        {
            cout << ptr[i] << "\t";
        }
    }

    void initialize()
    {
        for (size_t i = 0; i < used_size; i++)
        {
            cout<<"Enter "<<i<<"th number : ";
            cin>>ptr[i];
        }
        
    }
};
int main()
{
myArray arr(10,3);
arr.initialize();
arr.display();

    return 0;
}