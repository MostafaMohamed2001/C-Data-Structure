#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

void calcSum(int arr[] , int count){
    int res = 0;
    for (int i = 0; i < count; i++){
        res += arr[i];
    }
    cout << res << endl;
}

int main() {
    int arr[] = {10, 20, 30};
    int arrSize = sizeof(arr);
    cout << arrSize << endl;
    calcSum(arr , arrSize)
}