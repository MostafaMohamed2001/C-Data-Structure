#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s = "abcdefg";  // dcba
    string s2 = "abdefr";

    int coutDiff  = s.compare(s);

    cout << coutDiff;
}