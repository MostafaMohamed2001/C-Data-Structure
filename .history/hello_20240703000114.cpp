#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // int t ;
    // cin >> t;
   

    // cout << ints[n - 1] - 96 << endl;
    // while (t--) {

    // }
    int n;
    cin >> n;
    string s;
    getline(cin, s);

    sort(s, s + n);
        int lastCharValue = s[n - 1].back();

    cout<< lastCharValue - 96;
    return 0;
}
