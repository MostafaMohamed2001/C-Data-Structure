#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int f = 0;
    int l = 0;

    for (int i = 0; i < n; ++i){
        cout << i << endl;
        if (s[i] != '.')
        {
            f = i;
            break;
        }
    }
    cout << f << endl;
}