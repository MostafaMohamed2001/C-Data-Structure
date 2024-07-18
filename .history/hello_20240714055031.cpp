#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n, m;
    int arr[n][m];
    cin >> n >> m;
    for (int i = 0; i < n; ++i){
        for (int j = 0; i < j; ++j){
            cin >> arr[i][j];
        }
    }
        for (int i = 0; i < n; ++i){
        for (int j = 0; i < j; ++j){
            cout<<  arr[i][j]<<" "<<endl;
        }
    }
}
