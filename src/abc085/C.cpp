#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int N, Y, sum = 0;
    int mon[] = {
        10000,
        5000,
        1000
    };
    int num[3];
    cin >> N >> Y;
    for(int i = 0; i < 3; i++){
        num[i] = Y / mon[i];
        Y %= mon[i];
        sum += num[i];
    }
    if(sum <= N){
        printf("%d %d %d\n", num[0], num[1], num[2]);
    } else {
        printf("-1 -1 -1\n");
    }

}