#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;

bool isprime(int N){
    if(N == 2) return true;
    if(N % 2 == 0) return false;
    if(N == 1) return false;
    if(N == 3) return true;
    for(int i = 3; i <= sqrt(N); i+=2){
        if(N % i == 0) return false;
    }
    return true;
}

int main(int argc, char* argv[]){
    int Q;
    int l[10001], r[10001];
    vector<int> prime;
    vector<int> v;
    cin >> Q;
    rep(i, Q){
        cin >> l[i] >> r[i];
    }
    for(int i = 2; i < 10000; i++){
        if(isprime(i)) prime.push_back(i);
    }
    for(auto n:prime){
        if(isprime((n+1)/2)) v.push_back(n);
    }
    rep(i, Q){
        int ans = 0;
        for(int n:v){
            if(l[i] <= n && n <= r[i]) ans++;
        }
        cout << ans << endl;
    }
}
