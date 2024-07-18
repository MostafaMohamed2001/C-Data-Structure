#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int f = 0, l = 0;

    // إيجاد الموضع الأول الذي يحتوي على أثر
    for (int i = 0; i < n; ++i) {
        if (s[i] != '.') {
            f = i;
            break;
        }
    }

    // إيجاد الموضع الأخير الذي يحتوي على أثر
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] != '.') {
            l = i;
            break;
        }
    }

    // حالة عندما تكون كل الآثار من نوع 'R'
    if (s[f] == 'R' && s[l] == 'R') {
        cout << f + 1 << " " << l + 2 << endl;  // l + 2 لأن `l` هو آخر موضع من نوع 'R' ونحتاج إلى الموضع التالي.
    }
    // حالة عندما تكون كل الآثار من نوع 'L'
    else if (s[f] == 'L' && s[l] == 'L') {
        cout << l + 1 << " " << f << endl;  // f لأن `f` هو أول موضع من نوع 'L' ونحتاج إلى الموضع السابق.
    }
    // حالة عندما يبدأ الأثر بـ 'R' وينتهي بـ 'L'
    else if (s[f] == 'R' && s[l] == 'L') {
        for (int i = f; i < n; ++i) {
            if (s[i] == 'L') {
                l = i;
                break;
            }
        }
        cout << f + 1 << " " << l << endl;  // l لأن `l` هو أول موضع من نوع 'L' ونحتاج إلى الموضع السابق.
    }

    return 0;
}
