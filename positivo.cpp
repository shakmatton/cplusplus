#include <bits/stdc++.h>
using namespace std;

int main() {

    int myInt;

    cin >> myInt;
    
    while (myInt > 1000) {
        cin >> myInt;
    }
    
    if (myInt > 0) cout << "positivo";
    else {
        if (myInt < 0) cout << "negativo";
        else cout << "nulo";
    }
}