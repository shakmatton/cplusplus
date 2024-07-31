#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {

    // all buttons and lamps are OFF from start
    int button = 0;
    bool lamp1 = 0;
    bool lamp2 = 0;

    int numEvents = 0;

    cin >> numEvents;                                // how many times a button will be pressed

    if (2 <= numEvents <= pow(10, 5)) {
        for (int i = 0; i < numEvents; i++) {      
            
            cin >> button;
                        
            if (button == 1) lamp1 = !lamp1;        // if button1 activated >>> lamp1 activated/deactivated  (state changed)

            if (button == 2) {                      // if button2 activated >>> lamp1 and lamp2 alternate between activated/deactivated states
                lamp1 = !lamp1;
                lamp2 = !lamp2;
            }
        }
    }

    cout << lamp1 << endl;
    cout << lamp2 << endl;
}