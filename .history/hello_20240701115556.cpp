#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
   
    if (s[0] != 'A') {
        cout << "WA" << endl;
        return 0;
    }

   
    int cCount = 0;
    for (int i = 2; i < s.length() - 1; ++i) {
        if (s[i] == 'C') {
            cCount++;
        }
    }

 
    if (cCount != 1) {
        cout << "WA" << endl;
        return 0;
    }

    for (int i = 1; i < s.length(); ++i) {
        if (s[i] != 'C' && !islower(s[i])) {
            cout << "WA" << endl;
            return 0;
        }
    }

 
    cout << "AC" << endl;
    return 0;
}