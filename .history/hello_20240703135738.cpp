#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4}; // Added semicolon here
    // for loop 
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}