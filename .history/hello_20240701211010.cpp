#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
   
    string s;

    while (n--)
    {
        cin >> s;
       if((s[0] == 'Y' || s[0] == 'y' ) && (s[1] == 'E' || s[1] == 'e' ) && (s[2] == 'S' || s[2] == 's' )){
        cout << "YES" << endl;
       }else{
        cout << "NO" << endl;
       }
    }
}
