#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
int main() {
    int n , G =1;
    cin >> n;
    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;
    }
   
    
    cout << G << endl;
    for (int i = 1; i<n; i++) {
        if(s[i] != s[i-1])
            G++;
            
}
