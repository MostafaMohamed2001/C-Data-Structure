#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    // for loop 
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // range-based for loop
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    // sort function
    sort(v.begin(), v.end());
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
