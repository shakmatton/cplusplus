#include <bits/stdc++.h>
#include <random>      /* for randomizing tyre pressure input */ 
using namespace std;

int main(){
    
    int currentPressure = 0;     // current tyre pressure
    int newPressure = 0;         // new tyre pressure
    int deltaPressure = 0;       // tyre pressure difference (between current and new tyre pressures)

    cout << "WELCOME TO THE AUTOMATIC AIR PUMP SYSTEM!" << endl;
    cout << endl;
    cout << "Please connect your tyre plug into the pump system device:" << endl;   
    cout << endl;
       
    // randomizing between 1 and 40 using the <random> library.
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribuicao(1, 40);

    // random number generator (currentPressure between 1 and 40)
    currentPressure = distribuicao(gen);

    // displays tyre pressure
    cout << "Current tyre pressure detected = " << currentPressure << endl;                
    
    cout << "Thank you. Now, please enter desired tyre pressure value (between 1 and 40 PSI):" << endl;
    
    // user chooses desired tyre pressure
    cin >> newPressure;                                             

    // checking if user input is valid (between 1 and 40)
    
    while ((newPressure < 1) || (newPressure > 40)) {
        cout << "Not a valid value. Please choose a value between 1 and 40 PSI:" << endl;
        cin >> newPressure;   
    }

    cout << "Granted. Please wait for air pumping process to finish." << endl;   

    /*  Just include this here, in case you need a delay function:
    
        #include <iostream>   #include <thread>   #include <chrono>
        int main() {   std::cout << "Begin program..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3)); // Wait 3 secs
        std::cout << "Mango" << std::endl;
        return 0;  }     
    */

    // calculating pressure difference between current and new tyre pressures
    deltaPressure = currentPressure - newPressure;

    // displays all pressure info for the user
    cout << "[Original tyre pressure: " << currentPressure << " PSI]  [New tyre pressure >> " << newPressure << " PSI]  [Pressure difference >> " << deltaPressure << " PSI]" << endl;
    cout << endl;
   
}
