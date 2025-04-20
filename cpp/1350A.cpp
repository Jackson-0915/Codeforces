#include <iostream>
using namespace std;

void solve(int n,int k){
  int a = 2;
  while(n%a) a++;
  cout << (n+a+2*(k-1)) <<endl;
}

int main() {
  int t,n,k;
  cin >> t;
  while (t--){
    cin >> n >> k;
    solve(n,k);
  }
}