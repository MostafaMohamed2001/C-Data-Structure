#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

void calcSum(vector<int> numsVector){
    int res = 0;
    for (int i = 0; i < numsVector.size(); i++){
        res += arr[i];
    }
    cout << res << endl;
}

int main() {
    int arr[] = {10, 20, 30};
    
    // cout << arrSize << endl;
    calcSum(arr, 3);
}