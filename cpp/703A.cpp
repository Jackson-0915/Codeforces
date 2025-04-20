#include <iostream>
using namespace std;

int main() {
    int n, m, c, M, C;
    cin >> n;
    M = 0;
    C = 0;
    while (n--)
    {
        cin >> m >> c;
        if (m > c)
        {
            M += 1;
        }
        else if (c > m)
        {
            C += 1;
        }
    }
    if (M > C)
    {
       cout << "Mishka" <<endl;
    }
    else if (C > M)
    {
        cout << "Chris" <<endl;
    }
    else cout << "Friendship is magic!^^" <<endl;
}