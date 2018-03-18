#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int N, x, y;
    int red[201][201] = {}, blue[201][201] = {};
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        red[x][y] = 1;
    }
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        blue[x][y] = 1;
    }
}