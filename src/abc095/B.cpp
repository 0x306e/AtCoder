#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;

int main(int argc, char* argv[]){
    int N, X, ans = 0, sum = 0, min = 10000;
    int m[1001];
    cin >> N >> X;
    rep(i, N){
        cin >> m[i];
        sum += m[i];
        min = std::min(min, m[i]);
    }
    X -= sum;
    ans += N;
    ans += (X / min);
    cout << ans << endl;
}
