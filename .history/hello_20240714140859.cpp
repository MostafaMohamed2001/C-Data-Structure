#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int homeColors[n], guestColors[n];

    for (int i = 0; i < n; ++i) {
        cin >> homeColors[i] >> guestColors[i];
    }

    int guestUniformCount = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && homeColors[i] == guestColors[j]) {
                guestUniformCount++;
            }
     
 
    }

    cout << guestUniformCount << endl;

    return 0;
}
{}