#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    // for loop
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}