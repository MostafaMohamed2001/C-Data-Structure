#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
int main() {
 int n;
    cin >> n;
    vector<string> magnets(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> magnets[i];
    }

    int group_count = 1; // على الأقل مجموعة واحدة

    for (int i = 1; i < n; ++i) {
        if (magnets[i] != magnets[i - 1]) {
            group_count++;
        }
    }

    cout << group_count << endl;

    return 0;
}
