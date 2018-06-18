#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;

int main(int argc, char* argv[]){
    string S;
    int ans = 0;
    cin >> S;
    rep(i, 3){
        if(S[i] == 'o') ans++;
    }
    cout << 700 + 100 * ans << endl;
}
