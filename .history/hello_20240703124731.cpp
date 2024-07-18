#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s = "abcd";  // dcba
    // reverse(s.begin()+1, s.end()-1);
    s.erase(2, 1);
    cout << s;
}
