#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, ans = 0;
    cin >> n;

    vector<int> t;
    t.push_back(1);
    for(int i = 1;i<100001; i *= 6){
        t.push_back(i);
    }
    for(int i = 1;i<100001; i *= 9){
        t.push_back(i);
    }
    sort(t.begin(), t.end(), greater<int>());

    for(int i = 0; i < t.size() && n != 0; i++){
        while(n >= t[i]){
            n -= t[i];
            ans++;
        }
    }
    cout << ans << endl;

}

