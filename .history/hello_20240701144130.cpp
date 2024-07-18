#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t, a;
    cin >> n >> t >> a;
    int h[n] , res[n];
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
    for (int i = 0; i < n; i++){
        res[i] = t - h[i] * 0.006;
    }
    for (int i = 0; i < n; i++){
        cout << res[i] << endl;
    }
}
