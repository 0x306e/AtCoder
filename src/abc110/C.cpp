#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    string s, t;
    cin >> s >> t;

    bool flag = true;
    int m[200] = {};
    rep(i, s.length()){
        if(m[s[i]] == 0 && m[t[i]] == 0){
            m[s[i]] = t[i];
            m[t[i]] = s[i];
        }
        if (!(m[s[i]] == t[i] && m[t[i]] == s[i])){
            flag = false;
            break;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}

