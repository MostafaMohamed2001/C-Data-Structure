#include <iostream>
#include <string>
using namespace std;

int main() {
    // int n , k , Good = 0 , pass=0;
    // cin >> n >> k;
    // for (int i = 0; i < n; ++i){
    //     string s;
    //     cin >> s;
    //     for (int i = 0; i < s.length(); i++){
    //         if((s[i] - '0') >= 0 && (s[i] - '0') <= k){
    //                 Good++;
    //         }
            
    //         if(Good == k+1){
    //            pass++;
    //         }
    //         Good = 0;
    //     }
    // }
    // cout << pass << endl;

    int k;
    string s;
    cin >> s;
    cin >> k;
    int Good = 0, pass = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] - '0') >= 0 && (s[i] - '0') <= k)
            cout <<"" (s[i] - '0');
        {
            Good++;
        }

        if (Good == k + 1)
        {
            pass++;
        }
        Good = 0;
    }
        cout << pass << endl;
    return 0;

    }
