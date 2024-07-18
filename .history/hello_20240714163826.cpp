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
    for (int i = n - 1; i > 0; i-=2){
            // if(n %2 == 0){

        e += arr[i];
        o += arr[i-1];
        
            // }
    }
    // if(n %2 ==0){
    // cout << e << " " <<o<< endl;
    // }else{
    //     cout << e << " " <<o+arr[0]<< endl;
    // }
}
