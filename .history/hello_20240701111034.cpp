#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int s_size = s.length();
    bool isLower = false;
    if ((s[0] ) && (s[1] >= 97 && s[1] <= 122) && (s[2] >= 65 && s[2] <= 90))
    {
        for (int i = 3; i < s_size; i++){
            if(s[i] >= 97 && s[i] <= 122 ){
                isLower = true;
            }
            else
            {
                cout << "WA";
                return 0; 
            }
        }
    }
    else
    {
        cout << "WA";
    }


    if(isLower)
    {
    cout << "AC";
    }
}