#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s = "abcd";  // dcba
    // reverse(s.begin()+1, s.end()-1);
    s.substr(3, 4);
    cout << s;
}
