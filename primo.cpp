// Prime numbers theory: 
// https://www.todamateria.com.br/numeros-primos/


#include <bits/stdc++.h>
using namespace std;

int main() {
    
/*  A Python snippet follows as an example.
    Do another version and complete it using C++.

    x = int(input())
    if eh_primo(x):
	    print('S')
    else:
	    print('N')
*/



    int numAvaliado;
    int divisor = 2;                              // divisor start as 2
    int registroMultiplo = 1;
    int numAvaliadoOriginal;
    bool primo = true;

    cin >> numAvaliado;
    numAvaliadoOriginal = numAvaliado;
    
    while (numAvaliado != 1) {                    // numAvaliado = 10; 5; 5; 5; 5; 1

        // number is prime if divisible by 1 or itself!
        if ((numAvaliado == 1) || (numAvaliado == numAvaliadoOriginal)) primo = true;
        else primo = false;

        if (numAvaliado % divisor == 0) {         // divisor = 2; 2; 3; 4; 5
            numAvaliado = numAvaliado / divisor;  // numAvaliado = 5; x; x; x; 1
            registroMultiplo++;                   // registro = 1; x; x; x; 2
        }
        else divisor++;                           // divisor = 2; 3; 4; 5; x
    }

    if ((registroMultiplo == 2) && (primo)) cout << "S" << endl;
    else cout << "N" << endl;
        
}
