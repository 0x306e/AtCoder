#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;

int main(int argc, char* argv[]){
    int X, ans = 1;
    cin >> X;
    vector<int> v;

    if(X == 1){
        cout << 1 << endl;
        return 0;
    }
    rep(i, 33){
        for(int j = 2; j < 10; j++){
            int tmp = pow(i, j);
            if(tmp <= 1000){
                if(tmp > ans && tmp <= X) ans = tmp;
            }
        }
    }
    cout << ans << endl;
}
