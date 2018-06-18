#include "bits/stdc++.h"
using namespace std;

int main(int argc, char* argv[]){
    int N;
    char S[100];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> S[i];
        if(S[i] == 'Y'){
            cout << "Four" << endl;
            return 0;
        }
    }
    cout << "Three" << endl;
    return 0;
}