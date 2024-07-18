#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {

    vector<string> v(5, "i am str");
    cout << "Original Vector: ";
    for (int i : v)
        cout << i << " ";
    cout << endl;
}
