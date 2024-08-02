#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;  // old bullets
    int D;  // old damage per bullet

    int M;  // new bullets
    int P;  // new damage per bullet

    cin >> N;
    cin >> D;
    cin >> M;
    cin >> P;

    if (N*D < M*P) cout << "BUFF" << endl;
    else cout << "NERF" << endl;

}