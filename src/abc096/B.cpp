#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;

int main(int argc, char* argv[]){
    int A, B, C, K, mx = 0, sum = 0;
    int num[3] = {};
    rep(i, 3){
        cin >> num[i];
        mx = std::max(mx, num[i]);
        sum += num[i];
    }
    cin >> K;
    sum -= mx;
    rep(i, K){
        mx *= 2;
    }
    sum += mx;
    cout << sum << endl;
}