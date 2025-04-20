#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n - 4 <<endl;
        cout << 4 <<endl;
    }
    else{
        cout << n - 9 <<endl;
        cout << 9 <<endl;
    }
}