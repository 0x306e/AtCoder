#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, cnt = 0, tmp;
    vector<int> a;
    cin >> n;
    rep(i, n){
        cin >> tmp;
        a.push_back(tmp);
    }

    rep(i, n){
        while(a[i] % 2 == 0){
            a[i] /= 2;
            cnt++;
        }
    }

    cout << cnt << endl;
}
