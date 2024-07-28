#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int currentPressure = 0;     // current tyre pressure
    int newPressure = 0;         // new tyre pressure
    int deltaPressure = 0;       // tyre pressure difference (between current and new tyre pressures)

    // user enters current tyre pressure
    cin >> currentPressure;                                             

    // checking if user input is valid (between 1 and 40)
    while ((currentPressure < 1) || (currentPressure > 40)) {        
        cin >> newPressure;   
    }

    // user chooses desired tyre pressure
    cin >> newPressure;                                             

    // checking if user input is valid (between 1 and 40)    
    while ((newPressure < 1) || (newPressure > 40)) {
        cin >> newPressure;   
    }

    // calculating pressure difference between current and new tyre pressures
    deltaPressure = currentPressure - newPressure;

    // displays all pressure info for the user
    cout << deltaPressure;
}
