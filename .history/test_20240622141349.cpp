#include<iostream>
#include<iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; i++){
    s[i] = s[i + 1];
    s[i+1] = s[i]
  }
}