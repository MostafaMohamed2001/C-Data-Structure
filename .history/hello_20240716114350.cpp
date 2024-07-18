#include <iostream>
#include <string>
using namespace std;

int main()

{
    int n,k, pass = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        string str;
        cin >> str;
        bool digit_good[10] = {false};
        for (char c :str){
            int digit = c - '0';
            if(digit >=0 && digit <=k){
                digit_good[digit] = true;
            }
        }
        
    }
}