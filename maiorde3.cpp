#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a <= b) {
        if (b <= c) {
            cout << c;
        }
        else {
            cout << b;
        }
    }
    else {
        if (a <= c) {
            cout << c;
        }
        else {
            cout << a;
        }    
    }
}