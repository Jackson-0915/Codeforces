#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int t, n, a, b, ans;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        ans = n / 2;
        if(n % 2 == 0){
            if(n * a < ans * b){
                cout << n * a << endl;
            }
            else{
                cout << ans * b << endl;
            }
        }
        else{
            if(n * a < ans * b + a){
                cout << n * a << endl;
            }
            else{
                cout << ans * b + a << endl;
            }
        }
    }
}