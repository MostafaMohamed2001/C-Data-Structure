#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // int t;
    // cin>>t;
    
    // int memo = 0;
   
    // while (t--)
    // {

    //    string phones;
    //    cin >> phones;

    //    for (int i = 2; i < 13; i++)
    // {
    //     if ((phones[i] == phones[i + 1] && phones[i] == phones[i + 2] && phones[i] == phones[i + 3] ) || (phones[i] == phones[i + 1] && phones[i] == phones[i + 2]))
    //     {
    //         memo++;
    //     }
    // }

    // }
    // cout << memo;

    // return 0;

    string s;
   int mem
    cout << s << endl;

    for (int i = 0; i < s.length(); i++){
        cout << s[i] << endl;
    }
        for (int i = 2; i < s.length();; i++)
    {
        if ((s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3] ) || (s[i] == s[i + 1] && s[i] == s[i + 2]))
        {
            memo++;
        }
    }
}