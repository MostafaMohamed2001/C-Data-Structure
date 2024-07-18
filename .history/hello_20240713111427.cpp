#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){

    int arr[4];
    int repeated = 1;

    for(int i=0; i<4; i++)
        cin >> arr[i];

    sort(arr, arr+4);
 
     // print how many number appear in arr
     for(int i=0; i<3; i++)
        if(arr[i] == arr[i+1])
            repeated++;


    
     return 0;
}
