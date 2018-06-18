#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;


int h, w, n, m;
vector<string> a;
bool mp[10001][10001] = {};
void stamp(int x, int y){
    rep(i, n){
        rep(j, m){
            if(a[i][j] == '#') mp[x+i][y+j] = true;
        }
    }
}

void solve(){
    bool found;
    int ux, dx, lx, rx;
    bool left, right, up, down;


    rep(i, n){
        rep(j, m){
            if(a[i][j] == '.'){
                for(int k = )
            }
       }
        found = false;
    }

    rep(i, m){
        rep(j, n){
            if(a[j][i] == '#') {
                if(found) {
                    rep(k, ax, i){
                        a[j][i] = '#';
                    }
                    ax = j;
                } else {
                    found = true;
                    ax = j;
                }
            }
        }
        found = false;
    }

}

int main(int argc, char* argv[]){
    cin >> h >> w >> n >> m;
    string tmp;
    rep(i, n){
        cin >> tmp;
        a.push_back(tmp);
    }

    solve();
    rep(i, n){
        cout << a[i] << endl;
    }

    // rep(i, h-n+1){
    //     rep(j, w-m+1){
    //         stamp(i, j);
    //     }
    // }
    // int cnt = 0;
    // rep(i, h){
    //     rep(j, w){
    //         if(mp[i][j]) cnt++;
    //     }
    // }
    // cout << cnt << endl;
}
