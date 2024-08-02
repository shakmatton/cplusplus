#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;                          // # of chosen ones
    int tamanhoPedido;              // shirt size: 1 for small / 2 for medium 
    
    int camPedidasP = 0;     // small shirts required
    int camPedidasM = 0;     // medium shirts required

    int camCriadasP = 0;  // small shirts actually produced
    int camCriadasM = 0;  // medium shirts actually produced 

    cin >> N;

    
    // reads shirt size for each chosen one
    for (int i = 1; i <= N; i++) {
        cin >> tamanhoPedido;                  // enter size      

        // both produced shirts size must follow this range   
        if (tamanhoPedido == 1) camPedidasP++;   // # of size 1 (small) shirts
        else camPedidasM++;                     // # of size 2 (medium) shirts
    }

    cin >> camCriadasP;
    cin >> camCriadasM;

    // if there is enough shirts for everybody, no matter the size, say "Yes or No".
    if ((camPedidasP <= camCriadasP) && (camPedidasM <= camCriadasM)) cout << "S" << endl;            
    else cout << "N" << endl;

}