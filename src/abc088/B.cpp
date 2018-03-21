#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int N, a, alice = 0, bob = 0;
    bool b = 0;
    vector<int> v;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(auto vi:v){
        b ^= 1;
        if(b) alice += vi;
        else bob+= vi;
    }
    cout << alice - bob << endl;
}