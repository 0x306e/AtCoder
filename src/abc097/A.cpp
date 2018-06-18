#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;

int main(int argc, char* argv[]){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if((abs(a-c) <= d) || (abs(a-b) <= d && abs(b-c) <= d)) cout << "Yes" << endl;
    else cout << "No" << endl;
}