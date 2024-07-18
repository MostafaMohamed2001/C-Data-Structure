#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    string str;
    cin >> str;
    int space = 0 , res = 0;
    char pointer = 'a';

    for (int i = 0; i < str.length(); ++i){
        int distance = str[i] - pointer;
       res = min(distance, 26 - distance);
        space += res;
    }
    cout << res << endl;
}
