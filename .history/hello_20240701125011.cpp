#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    // string s;
    string s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }

    cout << s[1][0];
    // // to check if the word repeated in the arr
    // for (int i = 0; i < n; ++i){
    //     for (int j = i+1; j<n; j++){
    //         if(s[i] == s[j]){
    //             cout << "No";
    //             return 0;
    //         }
    //     }

    // }
    for (int i = 0; i < n; i++){
    //     for (int j = 0; j < s[i].size(); i++){
    //         cout << s[i][j] << " ";
    //     }
    //     cout << endl;
    // }

}