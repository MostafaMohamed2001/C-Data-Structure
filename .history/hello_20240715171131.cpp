#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 1000; ++i) {
        int total_price = k * i;
        if (total_price % 10 == 0 || total_price % 10 == r) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}