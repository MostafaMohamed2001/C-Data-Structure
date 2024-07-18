#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){

    int arr[4] , repeated = 0; 
  
    for(int i=0; i<4; i++)
        cin >> arr[i];

    sort(arr, arr+4);

     // check if num repeated in arr 
     bool repeated = false;
     for(int i=0; i<3; i++)
        if(arr[i] == arr[i+1])
            repeated = true;

     if(repeated)
       repeated++
     else
        cout << "No duplicate found\n";

    return 0;
}
