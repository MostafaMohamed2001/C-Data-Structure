#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min = arr[0];
    for (int i = 1; i < n; ++i){
        if(arr[i] < min){
            swap(min,arr[i] );
        }
    }

  for (int i = 0; i < n; i++){
         cout<< arr[i]<<endl;
    }
}