#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__va_args__,repi,_rep,)(__va_args__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int raw, n, ans = 0; 
    cin >> raw;
    n = raw;
    while(n != 0){
        ans += n % 10;
        n /= 10;
    }
    if(raw % ans == 0) cout << "yes" << endl;
    else cout << "no" << endl;
}
