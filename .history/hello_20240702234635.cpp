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
    cout<<s[n-1] - 96<<E
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
