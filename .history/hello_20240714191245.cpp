#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int isLast = n-1;
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }
    sort(arr, arr + n);


    for (int i = 0; i < n; ++i)
    {
        if(i != isLast){
            cout<<arr[i]<<" ";
        }else{
            cout<<arr[i];
        }
    }


}
