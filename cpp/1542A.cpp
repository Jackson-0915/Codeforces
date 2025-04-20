#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n, dn, cases, i;
  cin >> t;
  while(t--) {
    cin >> n;
    dn = 2 * n;
    int i = 0;
    while(dn--) {
      cin >> cases;
      if (cases % 2 == 1){
        i++;
      }
    }
    if(i == n){
      cout << "Yes" <<endl;
      }
    else cout << "No" <<endl;
  }
}