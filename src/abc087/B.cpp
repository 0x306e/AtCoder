#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int A, B, C, X, cnt = 0, tmp;
    cin >> A >> B >> C >> X;
    for(int i = 0; i <= A; i++){
        for(int j = 0; j <= B; j++){
            for(int k = 0; k <= C; k++){
                if((500*i + 100*j + 50*k) == X){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}