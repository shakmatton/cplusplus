#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int numCliquesInicial = 0;    
    int somaCliques = 0;

    cin >> numCliquesInicial;

    for (int i = 2; i > 0; i--) {
        somaCliques = numCliquesInicial * 2;
        numCliquesInicial = somaCliques;
    }

    cout << somaCliques;
}