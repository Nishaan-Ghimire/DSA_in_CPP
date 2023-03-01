// Vector in STL
// Some methods 
 #include<iostream>
 #include<vector>
 using namespace std;
 
//  Creating template function to display vector
 template <class T>
 void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
 }


 int main(){
 int element,size;
//  Creating vector
 vector<int>v1;
 vector<char>v2(6); //six element character vector
 vector<char>v3(v2); //six element character vector from v2
 vector<int> v4(5,12); //5 element vector of all element 12 
// syntax :     vector<int> v4(no of element,which number)
 cout<<"Enter the size of a vector : "<<endl;
 cin>>size;
 for (int i = 0; i < size; i++)
 {
    cout<<"Enter the "<< i <<" element ";
    cin>>element;
    // Pushing the element
    v1.push_back(element);

 }
//  Poping the element
v1.pop_back();  
 display(v1);
 

// Create an iterator pointed at beginning
vector<int> :: iterator iter = v1.begin();
v1.insert(iter,20);
display(v1);
//  inserting 5 copies
v1.insert(iter,5,20);
 display(v1);
 return 0;
 }