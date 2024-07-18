#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long B;
    cin >> B;

    if (B == 1) {
        cout << 1 << endl;
        return 0;
    }

    for (long long A = 2; A * A <= B; ++A) {
        if (pow(A, A) == B) {
            cout << A << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
