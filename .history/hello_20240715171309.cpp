#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 1000; ++i) {
        cout << " the price in mod " << k*i << endl;
        cout << " the price in mod r " << k % i << endl;
    }

    return 0;
}