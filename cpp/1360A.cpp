#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    int t, a, b, ans;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if(a > b){
            if(a > b * 2){
                cout << pow(a, 2) <<endl;
            }
            else{
                cout << pow((2 * b), 2) <<endl;
            }
        }
        else{
            if(b > a * 2){
                cout << pow(b, 2) <<endl;
            }
            else{
                cout << pow((2 * a), 2) <<endl;
            }
        }
    }
}