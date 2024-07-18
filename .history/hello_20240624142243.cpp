#include <iostream>
#include <cmath>

using namespace std;

int main() {
  string s, t;
  cin >> s>>t;
  int s_size = s.length();
  for (int i = s_size; i >0; i--){
    cout << s[i] <<" "<<i<< endl;
  }
}
