#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n , crime=0 , police = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
        i++;
    }

      for (int i = 0; i < n; i++){
        if(arr[i] == -1){
            if(police > 0){
                police--;
            }else{
                crime++;
            }
        }else{
            police++;
        }
    }
}
