#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int N, t[10001] = {}, x[10001] = {}, y[10001] = {}, cnt = 0, dx = 0, dy = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> t[i] >> x[i] >> y[i];
    }
    for(int i = 1; i <= t[N-1]; i++){
        if(dx != x[cnt]) dx += dx < x[cnt] ? 1 : -1;
        else if(dy != y[cnt]) dy += dy < y[cnt] ? 1 : -1;
        else dy++;
        if(i == t[cnt]){
            if(dx == x[cnt] && dy == y[cnt]){
                if(cnt == N-1){
                    cout << "Yes" << endl;
                    return 0;
                } else {
                    cnt++;
                }
            } else {
                cout << "No" << endl;
                return 0;
            }
        }
    }
}