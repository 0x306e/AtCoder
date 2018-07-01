#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n;
    vector<int> v;
    int tmp, raw = 0, sm = 0;
    cin >> n;
    rep(i, n){
        cin >> tmp;
        v.push_back(tmp - (i+1));
    }

    sort(v.begin(), v.end());
    int b = v[(n-1)/2];
    int ans = 0;

    for(auto a : v){
        ans += abs(a - b);
    }
    cout << ans << endl;
}

