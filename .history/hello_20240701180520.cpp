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

    
    // for (int i = 0; i < n; ++i){
    //     if(arr[i+1] < arr[i]){ 
    //         swap(arr[i],arr[i+1] );
    //     }
    // }

  for (int i = 0; i < n; i++){
         cout<< arr[i]<<endl;
    }
}