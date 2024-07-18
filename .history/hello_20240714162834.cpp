#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
int main() {
    int n , o=0,e =0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
       sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i-=2){

        // e += arr[n - 1];
        // o += arr[n - 2];
        
    }

    cout << e << " " <<o<< endl;
}
