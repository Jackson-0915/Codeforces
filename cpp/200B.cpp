#include <iostream>
using namespace std;

int main() {
  float n, p, b, answer;
  float a = 0;
  cin >> n;
  b = n;
  while(n--){
    cin >> p;
    a += p;
  }
  answer = a / b;
  cout << answer <<endl;
}