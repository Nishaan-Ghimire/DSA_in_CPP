/* WAP to generate half pyramid using number like below
1
22
333
4444
55555
 */

#include<iostream>
using namespace std;

int main(){
int r;
cin>>r;
for(int i = 1; i<=r; i++)
{
    for(int j = 1; j<=i; j++)
{
    cout<<i;
}
cout<<endl;
}
return 0;
}