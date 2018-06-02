#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int a, b, n;
    string x;
    cin >> a >> b >> n;
    cin >> x;

    rep(i, n){
        if(x[i] == 'S'){
            if(a) a--;
        } else if(x[i] == 'C'){
            if(b) b--;
        } else {
            if(a >= b){
                if(a) a--;
            } else if(b){
                b--;
            }
        }
    }
    cout << a << endl << b << endl;
}
