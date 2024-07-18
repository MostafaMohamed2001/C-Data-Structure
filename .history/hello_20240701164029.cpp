#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    for (int i = 0; i < k; i++){
        if(a % 2 != 0 ){
            a -= 1;
            a /= 2;
            b += 2;
            cout << a <<  " " << b ;
     
    }
    }
    
}
