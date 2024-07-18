#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// int func(int fenceH ,int personNumb){



// }

int main(){

        int fence ,  persons ;
        cin >> fence >> persons;
        int arr[persons];
        for (int i = 0; i < persons; ++i){
            cin >> arr[i];
        }
        int res = 0;
        for (int i = 0; i < persons; i++){
            if(arr[i] <= fence){
                res++;
            }else{
                res += 2;
            }
        }
        cout << res << endl;
        
}