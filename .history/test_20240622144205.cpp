#include<iostream>
#include<iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

  string s;
  cin >> s;
  int n = s.size();


  // s[1 - 1] = s[1];
  // cout << s[0] << endl;
  for (int i = 0; i < n -1; i+=2){
    char temp = s[i];
    s[i] = s[i + 1];
    s[i + 1] = temp;
  }
  cout << s << endl;
  return
}