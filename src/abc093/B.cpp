#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int A, B, K;
    vector<int> v;
    cin >> A >> B >> K;
    if(B - A < K * 2){
        for(int i = A; i <= B; i++){
            v.push_back(i);
        }
    } else {
        for(int i = 0; i < K; i++){
            v.push_back(A + i);
            v.push_back(B - i);
        }
    }
    sort(v.begin(), v.end());
    for(auto i : v){
        cout << i << endl;
    }
}