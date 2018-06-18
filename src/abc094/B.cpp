#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int N, M, X, tmp, cnta, cntb, ans = 100;
    bool A[101] = {};
    cin >> N >> M >> X;
    for(int i = 0; i < M; i++){
        cin >> tmp;
        A[tmp] = true;
    }
    cnta = 0;
    for(int i = X; i > 0; i--){
        if(A[i]) cnta++;
    }
    cntb = 0;
    for(int i = X; i <= N; i++){
        if(A[i]) cntb++;
    }
    cout << min(cnta, cntb) << endl;
}