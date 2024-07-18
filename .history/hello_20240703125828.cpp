#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s = "abcdefg";  // dcba
    string s2 = "abdefg";

    bool isEqual = s == s2;

    cout << isEqual;
}
