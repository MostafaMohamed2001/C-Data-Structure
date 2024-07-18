#include <iostream>
#include <string>

using namespace std;

int main() {
  int N, M;
  string C, D;

  cin >> N >> M;
  int P[M];
  int sum = 0;

  for (int i = 0; i < N; i++){
    cin >> C;
  }
  for (int i = 0; i < M; i++){
    cin >> D;
  }
   for (int i = 0; i < M; i++){
    cin>>P;
  }
  for (int i = 0; i < M; i++){
    sum += P[i];
  }
  cout << sum;
  return 0;
}
