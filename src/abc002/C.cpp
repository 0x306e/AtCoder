#include "bits/stdc++.h"
using namespace std;

int main(int argc, char* argv[]){
    int x[3], y[3];
    for(int i = 0; i < 3; i++){
        cin >> x[i] >> y[i];
    }
    for(int i = 2; i >= 0; i--){
        x[i] -= x[0];
        y[i] -= y[0];
    }
    double s = (0.5 * (1.0 * x[1] * y[2] - 1.0 * x[2] * y[1]));
    cout << fixed << (s > 0 ? s : -1 * s) << endl;
}