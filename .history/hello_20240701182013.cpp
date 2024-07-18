#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,k;
    cin >> n>>k;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;
    sort(arr, arr + n);

    for (int i = 0; i < k; i++)
    {
        for (int j = i; j < n && j < i + 3; j++)
        {
            cout << arr[j] << " " << endl;
        }
        cout << endl;
}
}