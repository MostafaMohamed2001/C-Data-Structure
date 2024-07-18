#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    int phones[12];
    int memo = 0;
    int num_memo;
    {
        int i;
        cout << "+";
        for (i = 0; i < 12; i++)
        {
            cin>>phones[i];
        }

        for (int i = 2; i < 12; i++){
            for (int j = 2; j < 12; ++j){
                if(phones[i] == phones[j]){
                    memo++;
                }
            }
        }
        if(memo >= 3){
            num_memo++;
        }
        memo = 0;

    }
    cout<<num_memo

    return 0;
}

