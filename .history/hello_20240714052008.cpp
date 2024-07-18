#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    int res = 0;
    cin >> s;
    bool app[26] = {false};
    for(char c : s){
        int ch = c - 'a';
        if(!app[ch]){
            res++;
            app[ch] = true;
        }
    }
    cout<<res<<end
}
