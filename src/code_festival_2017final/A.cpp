#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;

int main(int argc, char* argv[]){
    string S;
    vector<string> a = {"", "A"};
    vector<string> v;
    cin >> S;
    rep(i, 2){
        rep(j, 2){
            rep(k, 2){
                rep(l, 2){
                    v.push_back(a[i] + "KIH" + a[j] + "B" + a[k] + "R" + a[l]);
                }
            }
        }
    }

    rep(i, 16){
        if(S == v[i]){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}