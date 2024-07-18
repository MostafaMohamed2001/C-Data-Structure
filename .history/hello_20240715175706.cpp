#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    int l, b , lw ,bw;
    cin >> l>>b;
    for (int i = 1; i<10; ++i){
         lw = l * 3;
         bw = b * 2;
        if (lw > bw)
        {
            cout << i << endl;
            break;
        }
        l = lw;
        b = bw;
    }

        return 0;
}