#include "bits/stdc++.h"
using namespace std;

int main(int argc, char* argv[]){
    int Deg, Dis;
    string Dir, W;
    vector<string> directions = {
        "N",
        "NNE",
        "NE",
        "ENE",
        "E",
        "ESE",
        "SE",
        "SSE",
        "S",
        "SSW",
        "SW",
        "WSW",
        "W",
        "WNW",
        "NW",
        "NNW"
    };
    cin >> Deg >> Dis;
    if(Deg > 3487) Deg -= 3600;
    for(int i = 0; i < 16; i++){
        if((i * 225 - 112.5) < Deg && Deg < (i * 225 + 112.5)){
            Dir = directions[i];
            break;
        }
    }
    int p;
    double v = round(10 * (1.0 * Dis / 60)) / 10;
    if(v <= 0.2) p = 0;
    else if(v <= 0.5) p = 1;
    else if(v <= 3.3) p = 2;
    else if(v <= 5.4) p = 3;
    else if(v <= 7.9) p = 4;
    else if(v <= 10.7) p = 5;
    else if(v <= 13.8) p = 6;
    else if(v <= 17.1) p = 7;
    else if(v <= 20.7) p = 8;
    else if(v <= 24.4) p = 9;
    else if(v <= 28.4) p = 10;
    else if(v <= 32.6) p = 11;
    else p = 12;

    if(p == 0) cout << "C 0" << endl;
    else cout << Dir << ' ' << p << endl;
}