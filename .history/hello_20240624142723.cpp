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
    swap(s[i], s[0]);
    cout << s << endl;
    if(s ==)
    break;
  }
}
