#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main() {
  int t, a[5];
  cin >> t;
  while (t--) {
    cin >> a[1] >> a[2] >> a[3];
    sort(a+1, a+4);
    if(a[2] != a[3]) cout << "NO" <<endl;
    else cout << "YES\n" << a[3] << " " << a[1] << " " << "1" <<endl;
  }
}