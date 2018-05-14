#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;

int main(int argc, char* argv[]){
    ll N, C, ans = 0, now = 0, cal = 0, X, V;
    vector<int> x;
    vector<int> v;
    cin >> N >> C;
    rep(i, N){
        cin >> X >> V;
        x.push_back(X);
        v.push_back(V);
    }
    rep(i, N){
        now += v[i];
        cal = x[i];
        ans = max(now-cal, ans);
    }
    cout << ans << endl;
}
