#include <iostream>
using namespace std;
int main() {
  long long t, n, m, x;
  cin >> t;
  while (t--){
    cin >> n >> m >> x;
    if(x % n == 0){
      cout << x / n + (n-1)*m <<endl;
    }
    else{
      cout << x / n + (x%n-1)*m + 1 <<endl;
    }
  }
}