
#include<iostream>
using namespace std;
class Solution {
  string starting_bracket = "({[";
  string ending_bracket = ")}]";
  
public:
    bool isValid(string s) {
        int str_length = s.length();
        int i = 0;
        cout<<i<<endl;
        while(i <= str_length-1)
        {
            if(i < str_length-1){
            cout<<s.at(i)<<" "<<s.at(i+1)<<endl;
            if((s.at(i) == starting_bracket.at(0) && s.at(i+1) == ending_bracket.at(0)) ||
            (s.at(i) == starting_bracket.at(1) && s.at(i+1) == ending_bracket.at(1)) || 
            (s.at(i) == starting_bracket.at(2) && s.at(i+1) == ending_bracket.at(2)))
            {
                cout<<"in"<<endl;
                i += 2;
                continue;
            }else{
                cout<<"in else"<<endl;
                return false;
            }
            }else{
                cout<<"out"<<endl;
                if(s.at(i) == starting_bracket.at(0) || s.at(i) == starting_bracket.at(1) || s.at(i) == starting_bracket.at(2))
                {
                cout<<"out else"<<endl;
                    return false;
                }
            }
           
            
        }
         return true;
    }
};


int main(){
Solution obj;
bool brackets = obj.isValid("(){}[)");
cout<<brackets<<endl;

return 0;
}


