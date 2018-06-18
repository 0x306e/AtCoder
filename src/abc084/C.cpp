#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;

int main(int argc, char* argv[]){
    int N;
    int C[501] = {}, S[501] = {}, F[501] = {};
    vector<int> v;
    cin >> N;
    rep(i, N-1){
        cin >> C[i] >> S[i] >> F[i];
    }

    rep(i, N){
        int t = 0;
        for(int j = i; j < N-1; j++){
            t = max(t, S[j]);
            t += (F[j] - (t % F[j])) % F[j];
            t += C[j];
        }
        v.push_back(t);
    }

    for(auto n:v){
        cout << n << endl;
    }
}
