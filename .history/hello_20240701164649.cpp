#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    for (int i = 1; i <= k; i++)
    {
        if (i % 2 != 0)
        {
            if (a % 2 != 0)
            {
                a -= 1;
                a /= 2;
                b += a;
               
            }
            else
            {
                a /= 2;
                b += a;
              
            }
        }
        else
        {
            if (b % 2 != 0)
            {
                b -= 1;
                b /= 2;
                a += b2;
             
            }
            else
            {
                b /= 2;
                a += 2;
              
            }
        }
    }
     cout << a << " " << b;
}
