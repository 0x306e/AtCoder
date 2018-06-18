#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;

int main(int argc, char* argv[]){
    string s;
    int K;
    string a = "abcdefghijklmnopqrstuvwxyz";
    vector<string> v;
    cin >> s >> K;

    for(int i = 0; i < s.length(); i++){
        rep(j, 26){
            if(s[i] == a[j]){
                rep(k, 5){
                    v.push_back(s.substr(i, k+1));
                }
            }
        }
    }
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    cout << v[K-1] << endl;
}