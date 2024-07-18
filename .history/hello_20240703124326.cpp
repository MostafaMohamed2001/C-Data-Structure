#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s = "abcd";  // dcba
    reverse(s.begin(), s.end());
    cout << s;
}
