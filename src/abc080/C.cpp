#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n;
    int f[100][5][2] = {};
    int p[100][10] = {};
    cin >> n;
    rep(i, n){
        rep(j, 5){
            rep(k, 2){
                cin >> f[n][j][k];
            }
        }
    }
    rep(i, n){
        rep(j, 10){
            cin >> p[i][j];
        }
    }

    int mx = 0;
    rep(j, 5){
        rep(k, 2){
            int c = 0;
            int psum = 0;
            rep(i, 100){
                if(f[i][j][k] == 1){
                    c++;
                }
            }
            psum += max(p[i][c], p[i][c+1]);
            cout << psum << endl;
        }
    }
    
}
