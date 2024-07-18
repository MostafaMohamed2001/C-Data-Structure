#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int s;
        cin >> s;
        int arr[s];
        for (int i = 0; i < s; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + s);
        bool isUnique = true;

        for (int i = 1; i < n; ++i)
        {
            if (aee[i] == a[i - 1])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
