/* WAP to generate inverted half pyramid pattern like below
 *****
 ****
 ***
 **
 *
 */
#include<iostream>
using namespace std;

int main(){
int r;
cin>>r;
for(int i = r;i>0;--i)
{
for (int j = 0; j < i; ++j)
{
    cout<<"*";
}
cout<<endl;
}
return 0;
}