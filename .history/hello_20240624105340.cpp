#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if(i != j){
      string comb = s[i] + s[j];
      bool isPalindrome = true;
      for (int k = 0; k < comb.length() / 2; ++k)
      {
        if (comb[k] != comb[comb.length() - 1 - k])
        {
          isPalindrome = false;
          break;
        }
      }
      if (isPalindrome)
      {
        cout << "Yes";
        return 0;
      }
    }
  }
}
  cout << "No";
}