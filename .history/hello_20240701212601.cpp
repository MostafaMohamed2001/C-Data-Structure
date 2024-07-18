#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int count = 0;
    while (n--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++){
            if(i == 0){
                count += 2;
            }else{
                for (int j = i; j >= 0; j--){
                    if(s[j] == s[j-1]){
                        count++
                    }
                }
            }
        }
    }
}
