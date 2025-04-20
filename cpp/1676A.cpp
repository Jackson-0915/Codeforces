#include <iostream>
using namespace std;

int main() {
    int t, n, a, b, c, d, e, f;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a = n % 10;
        b = n / 10 % 10;
        c = n / 100 % 10;
        d = n / 1000 % 10;
        e = n / 10000 % 10;
        f = n / 100000;
        if (a + b + c == d + e + f)
        {
            cout << "YES" <<endl;
        }
        else cout << "NO" <<endl;
    }   
}