#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){

    int arr[5][5];
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            cin >> arr[i][j];
        }
    }
        for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            if(arr[i][j] == 1){
                cout << "the row is : " << i << " and the colum is : " << j << "the numbe" endl;
            }
        }
        cout << endl;
    }
}
