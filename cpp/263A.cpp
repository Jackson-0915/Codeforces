#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n = 0, k;
  cin >> k;
  while(k == 0){
    cin >> k;
    n++;
  }
  cout << abs(n%5 - 2) + abs(n/5 -2) <<endl;
} 