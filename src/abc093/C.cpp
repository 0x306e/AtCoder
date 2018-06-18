#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int A[3], cnt = 0, len;
    len = sizeof(A)/sizeof(int);
    vector<int> v;
    for(int i = 0; i < 3; i++){
        cin >> A[i];
    }
    while(!(A[0] == A[1] && A[0] == A[2])){
        sort(A, A+len);
        if(A[1] - A[0] >= 2){
            A[0] += 2;
        } else {
            A[0] += 1;
            A[1] += 1;
        }
        cnt++;
    }
    cout << cnt << endl;
}