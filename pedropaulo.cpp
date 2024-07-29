#include <bits/stdc++.h>
using namespace std;

int main() {

    double tempoPedro;  // Print "Pedro" if tempoPedro <= tempoPaulo
    double tempoPaulo;  // Or "Paulo", otherwise.

    cin >> tempoPedro;
    cin >> tempoPaulo;

    if (tempoPedro <= tempoPaulo) {
        cout << "Pedro";        
    }
    else {
        cout << "Paulo";                
    }
}