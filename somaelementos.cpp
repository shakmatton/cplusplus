#include <bits/stdc++.h>
using namespace std;

int main() {

    int nQuantity;
    int userInput;
    int soma = 0;

    cin >> nQuantity;

    for (int i = 1; i <= nQuantity; i++) {
        cin >> userInput;
        cout << " " << endl; 
        soma = soma + userInput; 
    }

        cout << endl; 

    cout << soma;
}