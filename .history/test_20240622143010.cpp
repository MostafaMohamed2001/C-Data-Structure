#include<iostream>
#include<iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

  string s;
  cin >> s;
  int n = s.size();
  s[0 - 1] = s[1];
  cout << s[1] << endl;
  // for (int i = 0; i < n; i++){
  //     if( i % 2 == 0 ){
  //       s[i + 1] = s[i];
  //         cout << s[i]<<" - ";
  //     }
  //     else{
  //       s[i - 1] = s[i];
  //         cout << s[i]<<" - ";
  //     }

  // }
}