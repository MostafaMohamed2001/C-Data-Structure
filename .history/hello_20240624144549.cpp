#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length()) {
        cout << "No" << endl;
    } else {
        string st = s + s;
        int len = st.length();
        for (int i = 0; i < len; i++) {
            if (st.substr(i, t.length()) == t) {
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << "No" << endl;
    }
    return 0;
}