#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  if (a == 2){
    cout << "NO" <<endl;
  }
  else{
    int num = a%2;
    int ber = num & 1;
    if (ber == 1) cout << "NO" <<endl;
    else cout << "YES" <<endl;
  }
}