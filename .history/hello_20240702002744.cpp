#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--)
    {
       int s;
       cin >> s;
       int arr[s];
       for (int i = 0; i < s; i++){
           cin >> arr[i];
       }
      sort(arr, arr + s);
 for (int i = 0; i < s; i++){
           cout << arr[i] << ;
       }
    }

    return 0;
}