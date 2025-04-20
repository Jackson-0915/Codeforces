#include <iostream>
using namespace std;

int main() {
  int n, t, a;
  cin >> t;
  while(t--){
    cin >> n;
    if(n % 7 == 0) cout << n <<endl;
    else{
      a = n - (n % 10) + 7;
      cout << a / 7 * 7 <<endl;
    }
  }
}