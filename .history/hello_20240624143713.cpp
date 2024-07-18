#include <iostream>
#include <cmath>

using namespace std;

int main() {
  string s, t;
  cin >> s>>t;
  int s_size = s.length();
  bool done = false;
 
  for (int i = s_size - 1; i >= 0; i--)
  {
    s[-1] = s[0];
    // s_size - 1;
    cout << s[] << endl;
    // if(s == t){
    //   done = true;
    // break;
    // }
  }
  // if(!done){
  //   cout << "No" << endl;
  // }else{
  //   cout << "Yes" << endl;
  // }
  return 0;
}

