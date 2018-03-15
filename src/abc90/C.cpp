#include "bits/stdc++.h"
using namespace std;

int main(int argc, char* argv[]){
    int N, M, ans;
    cin >> N >> M;
    if(N == 1 && M == 1) ans = 1;
    else if(N == 1 || M == 1) ans = (N > M ? N : M) - 2;
    else ans = (N - 2) * (M - 2);
    cout << ans << endl;
}