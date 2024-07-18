#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int s_size = s.length();
    cout << s_size << endl;
    cout << s_size -1  << endl;
     for (int i = 2; i < s.length() - 1; ++i) {
        if (s[i] == 'C') {
            cCount++;
        }
    }
}