#include <iostream>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (m > n){
            cout << "No" <<endl;
        }
        else{
            if ((n - m) % 2 == 0){
                cout << "Yes" <<endl;
            }
            else{
                cout << "No" <<endl;
            }
        }
    }
    
}