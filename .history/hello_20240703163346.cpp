#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

void calcSum(vector<int> numsVector){
    int res = 0;
    for (int i = 0; i < numsVector.size(); i++){
        res += numsVector[i];
    }
    cout << res << endl;
}

int main() {
    // int arr[] = {10, 20, 30};
    vector<int> t;
    t.push_back(1);
    t.push_back(2);
    t.push_back(3);
    t.push_back();

    // cout << arrSize << endl;
    calcSum();
}