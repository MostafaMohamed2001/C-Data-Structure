#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n , q;
        cin>>n>>q;
        int arr[n];
        for(int i=0; i<n; ++i){
            cin>>arr[i];
        }
        
        
        while (q--) {
            int arr_query[3];
            for(int i=0; i<3; i++){
                cin>>arr_query[i];
            }
                for(int i=arr_query[0]-1; i<=arr_query[1]-1; ++i){
                    arr[i] = arr_query[2];
                }
            int res = 0;
                for(int i=0; i<n; i++){
                    res+=arr[i];
            
                }
                if(res %2 != 0){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
                    res=0;
        }
        cout << endl;
    }
    
    
    
//    int n ;
//    cin>>n;
//    int arr[n];
//    for(int i=0; i<n; i++){
//        cin>>arr[i];
//    }
//    int arr_quer[3];
//    for(int i=0; i<3; i++){
//        cin>>arr_quer[i];
//    }
//    
//    for(int i=arr_quer[0]-1; i<=arr_quer[1]-1; ++i){
//        arr[i] = arr_quer[2];
//    }
//    int res = 0;
//    for(int i=0; i<n; i++){
//        res+=arr[i];
//        
//    }
//    if(res %2 != 0){
//        cout<<"YES"<<endl;
//    }else{
//        cout<<"NO"<<endl;
//    }
    return 0;
}

