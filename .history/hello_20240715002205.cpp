#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    string str;
    cin >> str;
    int upp = 0, loww = 0; 
    for (int i = 0; i < str.length(); ++i)
    {
        if(isupper(str[i])){
            ++upp;
        }else{
            ++loww;
        }
    }
   for(char c : str){
    if(upp > loww){
        toupper(c);
    }else if( (loww > upp) || (loww == upp)){
        
    }
   }
}

