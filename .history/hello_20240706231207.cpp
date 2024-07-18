#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string phones[13];
    int memo = 0;
   
    while (t--)
    {

        cout << "+";
        for (int i = 0; i < 13; i++)
        {
            cin>>phones[i];
        }

       for (int i = 2; i < 13; i++)
    {
        if ((phones[i] == phones[i + 1] && phones[i] == phones[i + 2] && phones[i] == phones[i + 3] ) || (phones[i] == phones[i + 1] && phones[i] == phones[i + 2]))
        {
            memo++;
        }
    }

    }
    cout << memo;

    return 0;


}