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
    for (int i > ; i+=2){
     

        e += arr[i];
        o += arr[i+1];

    }
    if(n%2 == 0){
    cout << e << "dsad " << o;
}else{
     cout << e+arr[n-1] << " " << o;
}
}
