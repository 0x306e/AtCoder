#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n;
    cin >> n;
    int a[] = {n/1000, n%1000/100, n%100/10, n%10};
    int s[] = {1, -1};
    int ans = 0;
    string pm = "+-";

    rep(i, 8){
        if(a[0] + a[1] * s[(i>>2)&1] + a[2] * s[(i>>1)&1] + a[3] * s[i&1] == 7){
            ans = i;
            break;
        }
    }

    printf("%d%c%d%c%d%c%d=7\n", 
            a[0],
            pm[(ans>>2)&1],
            a[1],
            pm[(ans>>1)&1],
            a[2],
            pm[ans&1],
            a[3]
          );
}
