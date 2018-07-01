#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, tmp;
    int mx = 0, mn = 1e9;

    cin >> n;
    rep(i, n){
        cin >> tmp;
        mn = min(mn, tmp);
        mx = max(mx, tmp);
    }

    cout << abs(mx - mn) << endl;

}

