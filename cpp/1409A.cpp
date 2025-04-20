#include <iostream>
using namespace std;

int main() {
    int t, a, b, ans, num;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (b > a){
            num = a;
            a = b;
            b = num;
        }
        ans = (a - b) / 10;
        if ((a - b) % 10 == 0){
            cout << ans <<endl;
        }
        else {
            cout << ans + 1 <<endl;
        }
    }
}