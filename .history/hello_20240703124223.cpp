#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s = "abcd";  // dcba
    cout << s.reserve(s.begin() , s.end());
}