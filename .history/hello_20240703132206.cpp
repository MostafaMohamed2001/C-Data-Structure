#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {

    vector<string> v(5, "i am str");
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}
