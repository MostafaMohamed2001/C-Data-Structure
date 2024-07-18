#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int s_size = s.length();
    bool isLower = false;
    if ((s[0] >= 65 && s[0] <= 90) && (s[1] >= 97 && s[1] <= 122) && (s[2] >= 65 && s[2] <= 90))
    {
        for (int i = 3; i < s_size; i++){
            if(s[i] >= 97 && s[i] <= 122 ){
                isLower = true;
            }else{
                isLower = false;
                cout << "AC";
                return 0;
            }
        }
    }else{
        cout << "AC";
    }
    if()
}