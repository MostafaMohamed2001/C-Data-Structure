#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s = "abcdefg";  // dcba
    // reverse(s.begin()+1, s.end()-1);
    s.substr(2, 2);
    cout << s;
}
