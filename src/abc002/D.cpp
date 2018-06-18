#include "bits/stdc++.h"
using namespace std;

int main(int argc, char* argv[]){
    int N, M , x, y, cnt = 0, max;
    int relation[13][13];
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> x >> y;
        relation[x][y] = 1;
    }
    for(int i = 1; i <= M; i++){
        for(int j = 1; j <= M; j++){
            if(relation[i][j] == 1) cnt++;
        }
        if(max < cnt) max = cnt;
        cnt = 0;
    }
    cout << max << endl;
}