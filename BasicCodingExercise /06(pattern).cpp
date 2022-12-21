/* WAP to print the Floyd's Triangle
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;

int main(){
int r;
cin>>r;
int counter = 1;
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < i; j++)
    {
        cout<<counter<<"\t";
        ++counter;
    }
    cout<<endl;
}

return 0;
}