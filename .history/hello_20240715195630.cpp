#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int f = 0;
    int l = 0;

    for (int i = 0; i < n; ++i){
       
        if (s[i] != '.')
        {
            f = i;
            break;
        }
    }
    
   
    for (int i = n - 1; i >= 0; --i)
    {
      
        if (s[i] != '.')
        {
            l = i;
            break;
        }
    }
  
  if(s[f] == 'R' && s[l] == 'R'){
      cout << f + 1<<" "<<l;
  }
  else if (s[l] == 'R' && s[l] == 'R')
  {
  }
}