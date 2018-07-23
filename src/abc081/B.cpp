#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,1,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, a, cntm = 1000;
    vector<int> v;
    cin >> n;
    rep(i, n){
        cin >> a;
        int cnt = 0;
        while(a % 2 == 0 && a != 0){
            a /= 2;
            cnt++;
        }
        cntm = min(cnt, cntm);
    }
    cout << cntm << endl;
}

