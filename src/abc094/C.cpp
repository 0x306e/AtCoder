#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int N, tmp, midlow, midhigh;
    int X[200001] = {};
    vector<int> v;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        X[i] = tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    midlow = v[(N/2)-1];
    midhigh = v[N/2];
    
    for(int i = 0; i < N; i++){
        if(X[i] <= midlow) cout << midhigh << endl;
        else cout << midlow << endl;
    }

}