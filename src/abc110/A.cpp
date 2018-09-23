#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int a[] = {0, 0, 0};
    int ans = 0;
    rep(i, 3) cin >> a[i];
    rep(i, 3) {
        ans = max(ans, a[i]*10 + a[(i+1) % 3]  + a[(i+2)%3]);
    }
    cout << ans << endl;
}

