#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {
    string s[] = {"ali", "mohamed", "sayed"};
    for(s x : s){
        cout << x << " ";
    }
    return 0;
}