#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int isbit(int bit, int n){
    if((bit>>n)&1 != 0) return 1;
    else return 0;
}

int main(int argc, char* argv[]){
    ll n, m, ans = 0;
    ll x, y, z;
    ll sumx= 0, sumy= 0, sumz = 0;
    cin >> n >> m;
    rep(i, n){
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }

    ll tmp = 0;
    bool b[] = {1, -1};
    rep(i, 8){
        int xs = i & 0b001 ? 1 : -1;
        int ys = i >> 1 & 0b001 ? 1 : -1;
        int zs = i >> 2 & 0b001 ? 1 : -1;

        tmp = sumx * xs + sumy * ys + sumz * zs;
        ans = max(ans, tmp);
    }

    cout << ans << endl;
}
