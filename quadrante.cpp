#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y;

    cin >> x;
    cin >> y;

    if ((-100 <= x <= 100) && (-100 <= y <= 100)) {         // values ranges from -100 to 100
        if ((x == 0) || (y == 0)) {    
            cout << "eixos" << endl;                        // X-axis or Y-axis 
        }
        else {
            if (x > 0) {                                    // X positive side (non-zero)
                if (y > 0) cout << "Q1" << endl;            // X positive and Y positive
                else cout << "Q4" << endl;                  // X positive and Y negative
            }
            else {                                          // X negative side (non-zero)
                if (y > 0) cout << "Q2" << endl;            // X negative and Y positive
                else cout << "Q3" << endl;                  // X negative and Y negative
            }
        }
    }
}