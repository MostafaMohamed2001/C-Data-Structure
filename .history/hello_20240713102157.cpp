#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){

    string s1, s2;
    cin >> s1>>s2;

    for (int i = 0; i < s1.length(); ++i){
        if(s1[i] >= 65 && s1[i] <95){
            s1[i] += 32;
        }
         if(s2[i] >= 65 && s2[i] <95){
            s2[i] += 32;
        }
       
    }
}

cout << s1 << endl;
cout << s2 << endl;

int len1 = s1.length();
int len2 = s2.length();