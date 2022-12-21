/* WAP to print butterfly pattern
*      *
**    **
***  ***
********
***  ***
**    **
*      *

 */


#include<iostream>
using namespace std;

int main(){
    int r;
    cin>>r;
    int mid = (r/2)+1;

for(int i = 0; i<r; i++)
{
 for (int j = 0; j < r; j++)
 {
     if(j <= i || j >= r-i)
     {
         cout<<"*";
     }else{
         cout<<endl;
     }
 }
    
}
return 0;
}