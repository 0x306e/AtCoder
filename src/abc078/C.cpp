#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    ll n, m;
    cin >> n >> m;
    int time = 1900;
    ll p = 1;
    rep(i, m) p *= 2;
    ll ans = (1900 * m + 100 * (n-m)) * p;

    cout << ans << endl;
}
