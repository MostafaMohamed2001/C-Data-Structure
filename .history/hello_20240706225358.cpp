#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int phones[12];
    int memo = 0;
   
    while (t--)
    {

        cout << "+";
        for (int i = 0; i < 12; i++)
        {
            cin>>phones[i];
        }

       for (int i = 2; i < 12; i++)
    {
        if ((phones[i] == phones[i + 1] && phones[i] == phones[i + 2] && phones[i] == phones[i + 3] ) || (phones[i] == phones[i + 1] && arr[i] == arr[i + 2]))
        {
            count++;
        }
    }

    }
    cout << num_memo;

    return 0;


}