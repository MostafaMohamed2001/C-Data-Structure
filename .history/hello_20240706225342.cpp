#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int phones[12];
    int memo = 0;
    int num_memo=0;
    while (t--)
    {

        cout << "+";
        for (int i = 0; i < 12; i++)
        {
            cin>>phones[i];
        }

       for (int i = 2; i < 12; i++)
    {
        if ((arr[i] == arr[i + 1] && arr[i] == arr[i + 2] && arr[i] == arr[i + 3] ) || (arr[i] == arr[i + 1] && arr[i] == arr[i + 2]))
        {
            count++;
        }
    }

    }
    cout << num_memo;

    return 0;


}