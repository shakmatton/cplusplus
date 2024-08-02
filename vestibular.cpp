#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {

    int n;
    char g;
    char r;
    int counter = 0;

    cin >> n;

    vector<char> gabarito;
    vector<char> respostas;

    for (int i = 0; i < n; i++) {
        cin >> g;
        gabarito.push_back(g);
    }

    for (int i = 0; i < n; i++) {
        cin >> r;
        respostas.push_back(r);
    }

    for (int i = 0; i < gabarito.size(); i++) {
        if (gabarito[i] == respostas[i]) counter++;            
    }

    cout << counter << endl;

}