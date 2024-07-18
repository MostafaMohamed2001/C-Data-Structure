#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){

    int arr[4]; 
    cout << "Enter 4 integers: ";
    for(int i=0; i<4; i++)
        cin >> arr[i];

    sort(arr, arr+4);
}
