#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, k;
    int a[200000];
    int s[200000] = {};
    cin >> n >> k;
    rep(i, n){
        cin >> a[i];
        s[a[i]]++;
    }
    sort(s, s+200000, greater<int>());
    int cnt = 0;
    for(int i = k;;i++){
        if(s[i] == 0) break;
        cnt += s[i];
    }

    cout << cnt << endl;
}

