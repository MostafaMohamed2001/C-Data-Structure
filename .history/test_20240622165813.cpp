#include<iostream>
#include<iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

  string s;
  cin >> s;
  int n = s.size();
  bool found = false;
  bool isMatch = false;
  for (int i = 0; i < n; i++)
    for (int i = 0; i < n; i += 2)
    {
      if (s.size() == 1)
      {
        cout << "Yes";
        return 0;
      }
      else if (s[i] == 'M')
      {
        if (s[i + 1] == 'F' || s[i + 1] == ' ')
        {
          found = true;
        }
      }
      else
      {
        isMatch = true;
      }
    }

if(isMatch){
  cout << "No";
}else{
  cout << "Yes";
}
}