#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long long t, n, a, big, small;
  cin >> t;
  while(t--){
    cin >> n;
      small = 10000000000;
      big = 0;
    while(n--){
      cin >> a;
      big = max(big, a);
      small = min(small, a);
    }
    cout << big - small <<endl;
  }
}