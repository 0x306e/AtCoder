#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, ans = 0, lw = 0, rw = 0, le = 0, re = 0;
    string s;
    cin >> n >> s;
    ans = n;
    for(char c : s) {
        if(c == 'W') rw++;
        if(c == 'E') re++;
    }

    rep(i, n-1){
        int m;
        m = lw + re;
        if(s[i] == 'W'){
            lw++;
            rw--;
        }
        if(s[i] == 'E'){
            le++;
            re--;
        }

        ans = min(ans, m);
    }
    cout << ans << endl;

}
