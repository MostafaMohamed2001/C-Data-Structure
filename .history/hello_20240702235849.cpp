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
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    sort(s, s + n);
        int lastCharValue = s[n - 1].back();

    cout<< lastCharValue - 96;
    return 0;
}
