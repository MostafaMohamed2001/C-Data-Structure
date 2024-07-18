#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n;
    
    while (n--)
    {
        cin >> a >> b >> c;
        if((a ==  b+c ) || (b == a+c) || (c == a+b)){
            cout << "YES"<<endl;
        }else{
            cout << "NO";
        }
    }

    return 0;
}
