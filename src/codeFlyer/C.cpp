#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, d;
    vector<ll> x;
    ll temp;
    cin >> n >> d;
    rep(i, n) {
        cin >> temp;
        x.push_back(temp);
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        int st = x[i];
        for(int j = i+1; j <= n; j++){
            int md = x[j];
            if(x[j] < st + d){
                for(int k = j+1; k <= md + d; k++){
                    if(x[k] < md + d) cnt++;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        int pt = x[i] + 2 * d;
        for(int j = i+2; j < n; j++){
            if(x[j] > pt) cnt++;
        }
    }

    cout << cnt << endl;
}
