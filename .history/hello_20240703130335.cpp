#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s = "abcdefg";  // dcba
    string s2 = "abdefr";
    bool res = string::npos == s.find('cs');
    cout << res;
}