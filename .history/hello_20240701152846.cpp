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
        res[i] = a - (t - h[i] * 0.006);
    }
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        if(res[i] < res[min]){
            min = i;
        }
    }
    cout << min+1<<endl;
}
