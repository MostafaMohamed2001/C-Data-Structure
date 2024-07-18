#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 10; ++i) {
        cout<<"this i 
        cout << " the price in mod " << (k*i) % 10 << endl;
        cout << " the price in mod r " << (k % i) % r << endl;
    }

    return 0;
}