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
    int num[] = {n%10, n%100/10, n%1000/100, n/1000};
    int t[10] = {};
    rep(i, 10){
        for(int a : num){
            if(a == i){
                t[i]++;
            }
        }
    }
    bool flag = false;
    rep(i, 10){
        if(t[i] == 3 && (num[0] != num[3])) flag = true;
        if(t[i] == 4) flag = true;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
