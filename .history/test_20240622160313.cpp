#include<iostream>
#include<iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

  string s;

  getline(cin, s);
  
  // cout << s.size();
  for (int i = 0; i < s.size(); i++){
    
    string t;
    if (s[i] != ' ')
    {
      t[i] = s[i];
    }else{
      cout << t;
    }
  }
}