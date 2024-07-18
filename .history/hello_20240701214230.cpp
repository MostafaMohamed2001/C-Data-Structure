#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int count = 0;
    while (n--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if(s.size() == 1){
                cout << 2 << endl;
                return 0;
            }

            if ( i == 0)
            {
                count += 2;
            }
            else{
                cout<<
            }
        //     else
        //     {
        //         for (int j = i-1; j >= 0; j--)
        //         {
        //             if (s[i] == s[j])
        //             {
        //                 count++;
        //             }
        //             else
        //             {
        //                 count += 2;
        //             }
        //         }
        //     }
        // }
        cout << count << endl;
    }
}
