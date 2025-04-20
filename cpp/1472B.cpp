#include <iostream>
using namespace std;

int main() {
    int t, n, a, total_one, total_two;
    cin >> t;
    while (t--)
    {
        total_one = 0;
        total_two = 0;
        cin >> n;
        while (n--)
        {
            cin >> a;
            if (a % 2 == 1){
                total_one += 1;
            }
            else if (a % 2 == 0){
                total_two += 1;
            }
        }
        if (total_one % 2 == 1){
            cout << "NO" <<endl;
        }
        else if (total_two % 2 == 1 && total_one != 0 && total_one % 2 == 0)
        {
            cout << "YES" <<endl;
        }
        else if (total_two % 2 == 1 && total_one == 0)
        {
            cout << "NO" <<endl;
        }
        else{
            cout << "YES" <<endl;
        }
    }
}