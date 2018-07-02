#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n;
    int tmp;
    cin >> n;
    vector<int> v;
    rep(i, n){
        cin >> tmp;
        v.push_back(tmp - (i+1));
    }

    sort(v.begin(), v.end(), greater<int>());
    int b = v[n/2];
    int c = v[n/2+1];
    ll mna = 0, mnb = 0;
    
    rep(i, v.size()){
        mna += abs(v[i] - b);
        mnb += abs(v[i] - c);
    }
    cout << min(mna, mnb) << endl;
}

