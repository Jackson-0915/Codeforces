#include <iostream>
using namespace std;
int main() {
  int a, b, c, n, t;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c >> n;
    if ((a + b + c + n)%3 != 0 || (max (a, max(b,c))) > ((a + b + c + n)/3)) cout << "NO" <<endl;
    else cout << "YES" <<endl;
  }
}