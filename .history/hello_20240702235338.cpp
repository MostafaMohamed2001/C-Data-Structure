#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // int t ;
    // cin >> t;
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    sort(s, s + n);
        int lastCharValue = s[n - 1].back();

    cout<< lastCharValue - 96;

  
    return 0;
}
