#include<iostream>
using namespace std;
int steps = 0;
void tower(int n,char from_tower,char to_tower,char aux_tower){
    
    if(n == 0)
    {
        return;
    }
    tower(n-1,from_tower,aux_tower,to_tower);
    cout<<"Move Disk "<< n <<" from rod "<< from_tower << " to rod "<< to_tower <<endl;
    steps++;
    tower(n-1,aux_tower,to_tower,from_tower);

}

int main(){
int n;
cout<<"Enter the no of disks : ";
cin>>n;
tower(n,'A','C','B');
cout<<"Total steps : "<< steps <<endl;
return 0;
}