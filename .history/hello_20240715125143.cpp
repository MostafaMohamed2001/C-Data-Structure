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
        int distance = abs(pointer - str[i]);
        res = min(distance, 26 - distance);
        space += res;
    }a
    cout << res << endl;
}