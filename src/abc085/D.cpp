#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int N, H, ta, tb, maxA = 0, sumB = 0, times = 0;
    vector<int> a, b;

    cin >> N >> H;
    for(int i = 0; i < N; i++){
        cin >> ta >> tb;
        a.push_back(ta);
        b.push_back(tb);
        maxA = maxA > a[i] ? maxA : a[i];
        sumB += b[i];
    }
    sort(b.rbegin(), b.rend());
    for(int i = 0; i < N;i++){
        if(b[i] < maxA) break;
        H -= b[i];
        times++;
    }
    times += ceil(H * 1.0 / maxA);
    cout << times << endl;
}