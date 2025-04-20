#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, aa, bb;
  cin >> a;
  cin >> b;
  for(int i = 1; i < 10; i++) {
    aa = pow(3,i);
    bb = pow(2,i);
    if(a * aa > b * bb) {
      cout << i;
      break;
    }
  }
}