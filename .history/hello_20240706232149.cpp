#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int memo = 0;
    int t;
    cin >> t;
    while (t--)

    {
        

    string s;
    cin >> s;
        for (int i = 2; i < s.length(); i++)
    {
        if ((s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3] ) || (s[i] == s[i + 1] && s[i] == s[i + 2]))
        {
            memo++;
            break;
        }
    }
   
}
if(memo >)
          cout << memo;   
        }

