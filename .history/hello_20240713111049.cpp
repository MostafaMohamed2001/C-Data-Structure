#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){

    int arr[4];
    int repeated = 0;

    for(int i=0; i<4; i++)
        cin >> arr[i];

    sort(arr, arr+4);
 for(int i=0; i<4; i++)
        cout << arr[i]<<"  for(int i=0; i<4; i++)
        cin >> arr[i];";
     // check if num repeated in arr 

    //  for(int i=0; i<3; i++)
    //     if(arr[i] == arr[i+1])
    //         repeated++;

    //  if(repeated){
    //      cout << repeated -1  << endl;
    //  }else{
    //     cout<<0<<endl;
    //  }
     return 0;
}