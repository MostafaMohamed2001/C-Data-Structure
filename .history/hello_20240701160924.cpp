#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, t, a;
    cin >> n >> t >> a;
    int h[n];
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }

    int minIdx = 0;
    double Fdiff =abs(a - (t - h[0] * 0.006) );
    for (int i = 1; i < n; i++){
        double temp = abs(t - h[i] * 0.006);
        double diffArr = a - temp;
        if(diffArr < Fdiff){
            Fdiff = diffArr;
            minIdx = i;
        }
    }
    cout << minIdx + 1 << endl;



    for (int i = 1; i < n; i++) {
    
        if (diff < minDiff) {
            minDiff = diff;
            minIndex = i;
        }
    }

    cout << minIndex + 1 << endl;
    return 0;
}
