#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int N, zero = 0;
    ll ans = 0;
    int cnt[5];
    char S[10001][11];
    char march[] = {'M', 'A', 'R', 'C', 'H'};
    int M[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 2};
    int Q[] = {1, 1, 1, 2, 2, 3, 2, 2, 3, 3};
    int R[] = {2, 3, 4, 3, 4, 4, 3, 4, 4, 4};
    cin >> N;
    for(int i = 0; i < N; i++){
        if(!scanf("%s", S[i])) break;
        for(int j = 0; j < 5; j++){
            if(S[i][0] == march[j]) cnt[j]++;
        }
    }
    for(int i = 0; i < 10; i++){
        ans += cnt[M[i]] * cnt[Q[i]] * cnt[R[i]];
    }
    cout << ans << endl;
}