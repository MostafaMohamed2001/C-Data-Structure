#include <iostream>
#include <cmath>
#include <SR>

using namespace std;

int main() {
  string s, t;
  cin >> s>>t;
  int s_size = s.length();
  bool done = false;
 
  for (int i = 0; i <s_size; i++)
  {
    s.replace(s[0], s[s_size]);
  }
  // if(!done){
  //   cout << "No" << endl;
  // }else{
  //   cout << "Yes" << endl;
  // }
  return 0;
}

