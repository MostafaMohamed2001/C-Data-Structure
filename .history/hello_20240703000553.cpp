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

        char maxChar = *max_element(s.begin(), s.end()); 

        cout << (maxChar - 96) << endl; 
    }

    return 0;
}
