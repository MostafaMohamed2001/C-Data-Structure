#include<iostream>
#include<iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

  string s;
  cin >> s;
  int n = s.size();
  for (int i = 1; i < n; i++){
      if(s[i] >= 65 && s[i]<=90){
        cout << i << endl;
      }
  }
}