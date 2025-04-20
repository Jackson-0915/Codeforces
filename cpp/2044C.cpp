#include <iostream>
using namespace std;

int main() {
    int t, m, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> m >> a >> b >> c;
        if (m > a && m > b && (2*m - a - b) > c){
            cout << a + b + c <<endl;
        }
        else if ((m > a && m > b && (2*m - a - b) <= c) || (m > a && m <= b && (m - a) <= c) || (m <= a && m > b && (m - b) <= c) || (m <= a && m <= b)){
            cout << 2 * m <<endl;
        }
        else if (m > a && m <= b && (m - a) > c){
            cout << m + a + c <<endl;
        }
        else if (m <= a && m > b && (m - b) > c){
            cout << m + b + c <<endl;
        }
    }   
}