#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {
    vector<string> s(5, "hello");

    s[1] = "Mostafa";
    // s.p/op_back();
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
}