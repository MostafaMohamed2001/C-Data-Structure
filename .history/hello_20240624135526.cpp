#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

int main()
{
  long long b;
  cin >> b;
  for (long long a = 0; a < sqrt(b); a++){
    if(pow(a,a) == b){
      cout << a << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}