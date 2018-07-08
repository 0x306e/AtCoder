#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

ll l[100];

ll luca(int n){
    if(l[n] != 0) return l[n];
    l[n] = luca(n-1) + luca(n-2);
    return l[n];
}

int main(int argc, char* argv[]){
    int n;
    cin >> n;
    l[0] = 2;
    l[1] = 1;
    rep(i, 2, 100){
        luca(n);
    }

    cout << l[n] << endl;
}
