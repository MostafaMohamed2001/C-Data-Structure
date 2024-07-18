#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){

    int arr[4];
    int repea

    for(int i=0; i<4; i++)
        cin >> arr[i];

    sort(arr, arr+4);

     // check if num repeated in arr 
     bool repeated = false;
     for(int i=0; i<3; i++)
        if(arr[i] == arr[i+1])
            repeated++;

     if(repeated){
         cout << repeated << endl;
     }else{
        cout<<0<<endl;
     }
     return 0;
}
