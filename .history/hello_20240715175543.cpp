#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    int l, b;
    cin >> l>>b;
    for (int i = 1; i<10; ++i){
        int lw = l * 3;
        int bw = b * 2;
        if (lw > b)
        {
            cout << i << endl;
            break;
        }
    }

        return 0;
}