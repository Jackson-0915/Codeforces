#include <iostream>
#include <cmath>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  long long n, total;
  cin >> n;
  if (n%2 == 0){
    cout << n/2 <<endl;
  }
  else cout << (n-1)/2 - n <<endl;
}