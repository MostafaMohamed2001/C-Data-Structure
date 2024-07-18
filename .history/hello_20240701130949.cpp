#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    bool FeqL-
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    // // to check if the word repeated in the arr
    // for (int i = 0; i < n; ++i){
    //     for (int j = i+1; j<n; j++){
    //         if(s[i] == s[j]){
    //             cout << "No";
    //             return 0;
    //         }
    //     }

    // }
    for (int i = 0; i < n; i++){

       
    for (int j = 0; j < s[i].size(); j++)


    {
            //Skip first word
            if(i == 0)
            {
            continue;
            }
            else
         {
            
             if (s[i][0] == s[i - 1][0])
             {
                 cout << "Good"<<endl;
                 break;
             }
         }

         
    }




    }
}
