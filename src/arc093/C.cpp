#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int N, A[100001] = {}, sum = 0, now = 0, tmp1, tmp2;
    bool plused;
    A[0] = 0;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> A[i];
        sum += abs(A[i] - now);
        now = A[i];
    }
    sum += abs(now);


    for(int i = 1; i <= N; i++){
        if((A[i-1] <= A[i] && A[i] <= A[i+1]) || (A[i+1] <= A[i] && A[i] <= A[i-1])){
            cout << sum << endl;
        } else {
            tmp1 = abs(A[i] - A[i-1]);
            tmp2 = abs(A[i] - A[i+1]);
            cout << sum - ((tmp1 < tmp2 ? tmp1 : tmp2) * 2) << endl;
        }
    }
}