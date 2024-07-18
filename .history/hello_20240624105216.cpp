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
      if(i != )
      string comb = s[i] + s[j];
      bool isPalindrome = true;
      for (int k = 0; k < comb.size() / 2; ++k)
      {
        if (comb[i] != comb[n - 1 - i])
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

  cout << "No";
}