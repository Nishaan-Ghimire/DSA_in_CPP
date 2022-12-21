/* WAP to generate hollow rectangle star pattern like below
 *****   
 *   *
 *   *
 *   *
 *   *
 *****   
 */


#include<iostream>
using namespace std;

int main(){
int r,c;  
cin>>r>>c;  
for(int i = 0; i< r; ++i){
    for (int j = 0; j < c; j++)
    {
        if(i!= 0 && i != r-1 && j != 0 && j!= c-1)
        {
            cout<<" ";
            continue;
        }
        cout<<"*";
    }
    
    cout<<endl;
}
return 0;
}