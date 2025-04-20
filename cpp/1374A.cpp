#include <iostream>
using namespace std;
int main() {
  int t, n, x, y, answer;
  cin >> t;
  while (t--){
    cin >> x >> y >> n;
    int z = (n - y)/x;
    cout << z*x+y <<endl;
  }
}