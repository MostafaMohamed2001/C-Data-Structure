#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
  int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    int total_calories = 0;

    for (int i = 0; i < s.length(); ++i){
        if(s[i] == '1' ){
            total_calories += a1;
        }else if(s[i] == '2'){
            total_calories += a2;
        }else if(s[i] == '3'){
            total_calories += a3;
        }else if(s[i] == '4')
    }
        cout << total_calories << endl;

    return 0;
}
