#include <iostream>
#include <string>
using namespace std;

int main() {
    int n , k , Good = 0 , pass=0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i){
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++){
            if((s[i] - '0') >= 0 && (s[i] - '0') <= k){
                    Good++;
            }
            cout<<Good
            if(Good == k+1){
               pass++;
            }
        }
  
    }
    cout << pass << endl;
    return 0;
}
