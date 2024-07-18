#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int main() {
    vector<int> numsOne{10, 20, 30, 40};
    vector<int> numsTwo = {100, 200, 300, 400};
    vector<int> numsThree(4, 50);
    for (int i = 0; i < numsOne.size(); i++){
        cout << numsOne.at(i) << " ";
    }
    cout << "\n==================\n";
     for (int i = 0; i < numsTwo.size(); i++){
        cout << numsTwo.at(i) << " ";
    }
    cout << "\n==================\n";
     for (int i = 0; i < nums.size(); i++){
        cout << numsOne.at(i) << " ";
    }
    cout << "\n==================\n";
}