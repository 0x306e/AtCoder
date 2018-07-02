#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, tmp, ans = 0;
    cin >> n;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());
    int tar = (a[0] + 1) / 2;
    int diff = a[0] - tar;
    for(int n : a){
        if(abs(tar - n) < diff){
            diff = abs(tar - n);
            ans = n;
        }
    }
    cout << a[0] << " " << ans << endl;
}
