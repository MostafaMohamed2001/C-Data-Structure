#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s; // Read the entire string at once

        char maxChar = *max_element(s.begin(), s.end()); // Find the maximum character in the string

        cout << (maxChar - ) << endl; // Output the corresponding alphabet size
    }

    return 0;
}
