#include "bits/stdc++.h"
using namespace std;

char aiueo[] = {
    'a',
    'i',
    'u',
    'e',
    'o'
};

int contain(char A){
    for(auto s:aiueo){
        if(A == s) return 1;
    }
    return 0;
}

int main(int argc, char* argv[]){
    char W[32];
    cin >> W;
    for(int i = 0; W[i]; i++){
        if(!contain(W[i])) cout << W[i];
    }
    cout << endl;
}