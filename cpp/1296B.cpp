#include <iostream>
using namespace std;

int main() {
  int t, s;
  cin >> t;
  while(t--){
    cin >> s;
    if (s < 10) cout << s <<endl;
    else cout << s+(s-1)/9 <<endl; 
  }
}