#include <iostream>
#include <string>

using namespace std;

int main() {
  int N, M;
  string C, D;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> C;
  }
  cin >> M;
  for (int i = 0; i < M; i++)
  {
    cin >> D;
  }
  int p0;
  cin >> p0;
  int P[M];
  for (int i = 0; i < M + 1; i++)
  {
    cin>>P[i];
  }
  int total = 0;
  for (int i = 0; i < N; i++)
  {
    bool found = false;
    for (int j = 0; j < M; j++){
      if(C[i] == D[j]){
        total += P[j];
        found = true;
        break;
      }
    }
    if(!found){
      total += P[0];
    }
  }
  cout<<t
    return 0;
}
