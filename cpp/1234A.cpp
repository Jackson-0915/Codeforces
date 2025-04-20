#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int q, n, a;
  cin >> q;
  while(q--){
    cin >> n;
    int total = 0;
    for(int i = 0; i < n; i++){
      cin >> a;
      total += a;
    }
    if(total % n == 0){
      cout << total / n << endl;
    }
    else{
      cout << (total / n) + 1<<endl;
    }
  }
}