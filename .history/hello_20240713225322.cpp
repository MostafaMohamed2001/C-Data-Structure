#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    int res = 0;
    cin >> s;
    for (int i = 0; i < s.length(); ++i){
        for (int j = i + 1; j < s.length(); ++j){
            if(s[i] == s[j]){
                res++;
            }
        }
    }
    cout << res<<endl;
    cout << s.length() - res << endl;
    if(6%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
}
