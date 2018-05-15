#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;

bool isnum(char c){
    string n ="0123456789";
    rep(i, 10){
        if(c == n[i]) return true;
    }
    return false;
}

int main(int argc, char* argv[]){
    int A, B;
    string S;
    string n = "0123456789";
    bool ans = true;

    cin >> A >> B >> S;
    rep(i, A){
        ans &= isnum(S[i]);
    }
    rep(i, B){
        ans &= isnum(S[A+1+i]);
    }
    ans &= (S[A] == '-');

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

}
