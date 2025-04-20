#include <iostream>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 1){
            cout << "HARD" <<endl;
            goto outside;
        }
        else continue;
    }
    cout << "EASY" <<endl;
    outside:;
}