#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

void calcSum(vecint arr[] , int count){
    int res = 0;
    for (int i = 0; i < count; i++){
        res += arr[i];
    }
    cout << res << endl;
}

int main() {
    int arr[] = {10, 20, 30};
    
    // cout << arrSize << endl;
    calcSum(arr, 3);
}