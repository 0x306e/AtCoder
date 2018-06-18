#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, a, b, cnt = 0;
    cin >> n >> a >> b;
    rep(i, 1, n+1){
        int k = i;
        int sum = 0;
        while(k > 0){
            sum += k % 10;
            k /= 10;
        }
        if(a <= sum && sum <= b){
            cnt += i;
        }
    }
    cout << cnt << endl;

}
