#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    if(! (s[0] >= 65 && s[0] < 91)){
        s[0] = toupper(s[0]);
    }
    cout << s << endl;

    return 0;
}