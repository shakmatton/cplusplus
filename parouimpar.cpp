#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int ddosBino; //= -1;
    int ddosCino; //= -1;

    cin >> ddosBino;
    cin >> ddosCino;

    // while (!(0 <= ddosBino <= 5) || !(0 <= ddosCino <=5)) {
    //     cin >> ddosBino;
    //     cin >> ddosCino;
    // }

    if ((0 <= ddosBino <= 5) && (0 <= ddosCino <=5)) {
        if ((ddosBino + ddosCino) % 2 == 0) {
            cout << "Bino";                          // Bino = par
        }
        else cout << "Cino";                         // Cino = ímpar 
    }

    // if ((0 <= ddosBino && ddosBino <= 5) && (0 <= ddosCino && ddosCino <= 5)) {
    //         if ((ddosBino + ddosCino) % 2) {
    //             cout << "Bino"; // Bino = par
    //         } else {
    //             cout << "Cino"; // Cino = ímpar
    //         }
    //     }


}