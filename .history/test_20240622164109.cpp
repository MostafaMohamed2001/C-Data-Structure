#include<iostream>
#include<iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

  string s;
  cin >> s;
  int n = s.size();
  bool foumd = false;
  for (int i = 0; i < n; i++)
  {
    if (s.size() == 1)
    {
      cout << "Yes";
    }
    else if (s[i] == 'M' && s[i + 1] == 'F')
    {
    }
  }
