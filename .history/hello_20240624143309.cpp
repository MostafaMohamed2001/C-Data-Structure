#include <iostream>
#include <cmath>

using namespace std;

int main() {
  string s, t;
  cin >> s>>t;
  int s_size = s.length();
  bool done = false;
  
  cout << s[-1] << endl;
  cout << s[0] << endl;
  cout << s[1] << endl;
  cout << s[2] << endl;
  // for (int i = s_size - 1; i >= 0; i--)
  // {
  //   s[i] = s[0];

  //   // if(s == t){
  //   //   done = true;
  //   // break;
  //   // }
  // }
  // if(!done){
  //   cout << "No" << endl;
  // }else{
  //   cout << "Yes" << endl;
  // }
  return 0;
}

