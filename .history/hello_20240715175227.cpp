#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    int l, b;
    cin >> l>>b;
    for (int i = 1;i; ++i){
        if(l*i > b*i){
            cout << i << endl;
            break;
        }
    }

        return 0;
}