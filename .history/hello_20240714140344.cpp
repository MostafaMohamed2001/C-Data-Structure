#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    // مصفوفات لتخزين ألوان الزيّ المنزلي والزيّ الضيفي لكل فريق
    int homeColors[n], guestColors[n];

    for (int i = 0; i < n; ++i) {
        cin >> homeColors[i] >> guestColors[i];
    }

    int guestUniformCount = 0;

    // محاكاة كل مباراة بين كل فريقين
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            // if (i != j && homeColors[i] == guestColors[j]) {
            //     guestUniformCount++;
            // }
            cout<<homeColors[i] <<" " << guestColors[j]<<e
        }
    }

    cout << guestUniformCount << endl;

    return 0;
}
