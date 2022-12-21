#include<iostream>
#define MAX 10
using namespace std;

class queue{
    int rear = -1,front = -1,a[MAX];

public:
void insert(int x){
if(rear == MAX-1)
{
    cout<<"Queue is full!!"<<endl;
}
else{
if(rear == -1 && front == -1)
{
    front == rear == 0;

}else{
    rear++;
}
a[rear] = x;
}
}


};
int main(){

return 0;
}