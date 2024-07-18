#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){

    string s1, s2;
    cin >> s1>>s2;
    bool eq = false;
    for (int i = 0; i < s1.length(); ++i)
    {
        if(s1[i] >= 65 && s1[i] <95){
            s1[i] += 32;
        }
         if(s2[i] >= 65 && s2[i] <95){
            s2[i] += 32;
        }
    }
    cout << s1 << endl;
cout << s2 << endl;

        for (int i = 0; i < s1.length(); ++i){
       if(s1[i] - s2[i] == 0){
        eq = true;
       }else if(s1[i] - s2[i] < 0){
        cout
       }
       
    }

}

