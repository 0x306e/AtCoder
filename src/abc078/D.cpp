#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, z, w;
    cin >> n >> z >> w;
    vector<int> v(n);
    rep(i, n) cin >> v[i];

    int a = abs(v[n-1] - w);
    int b = 0;
    int mx = 0;
    if(n > 1){
        rep(i, n-1){
            mx = max(mx, v[i]);
        }
        b = abs(mx - v[n-1]);
    }

    int ans = max(a, b);
    cout << ans << endl;
    
}
