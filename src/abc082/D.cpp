#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    string s;
    int x, y, px = 0, py = 0;
    cin >> s;
    cin >> x >> y;
    queue<int> qx;
    queue<int> qy;

    int d = 0;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'F') cnt++;
        if(s[i] == 'T'){
            if(!(++d % 2)) {
                qx.push(cnt);
                cnt = 0;
            } else {
                qy.push(cnt);
                cnt = 0;
            }
        }
    }
    for(auto a : qx){
        if(px < x) px += a;
        else px -= a;
    }

    for(auto a : qy){
        if(py < y) py += a;
        else py -= a;
    }

    if(px == x && py == y) cout << "Yes" << endl;
    else cout << "No" << endl;

}
