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
    for (int i = 0; i < n; i++){
        cout << s[i] << endl;
    }

        // while (t--) {
        //     int arr[3];
        //     for (int i = 0; i < 3; i++) {
        //         cin >> arr[i];
        //     }
        //     sort(arr, arr + 3);
        //     cout << arr[1] << endl;
        // }

        return 0;
}
