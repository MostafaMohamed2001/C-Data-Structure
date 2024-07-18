#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    string C[N];
    for (int i = 0; i < N; ++i) {
        cin >> C[i];
    }
    
     for (int i = 0; i < N; ++i) {
        cout<<C[i]<<" " << i<<endl;
    }
}
