#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    int res = 0;
    cin >> s;
    for (int i = 0; i < s.length() - 1; ++i){
        if(s[i] == s[i+1]){
            res++;
        }
    }
    cout << res << endl;
    ;
    cout << s.length() - res << endl;
    // if(s.length() - res %2 == 0){
    //     cout << "CHAT WITH HER!" << endl;
    // }else{
    //     cout << "IGNORE HIM!" << endl;
    // }
}
