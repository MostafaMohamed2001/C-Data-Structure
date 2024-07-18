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
        int distance = abs(str[i] - pointer);
        res = min(distance, 26 - distance);
        cout <<"res :; "<< res << endl;
        space += res;
        pointer = str[i];
    }
    cout << space << endl;
}
