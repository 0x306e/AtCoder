#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int N, A[2][101], cnt, mx = 0;

    cin >> N;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cnt = 0;
            for(int k = 0; k < N; k++){
                if(k == j) cnt += (A[0][k] + A[1][k]);
                if(k < j) cnt += A[0][k];
                if(k > j) cnt += A[1][k];
            }
            if(cnt > mx) mx = cnt;
        }
    }
    cout << mx << endl;
}