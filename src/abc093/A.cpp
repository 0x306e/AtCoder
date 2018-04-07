#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    char S[4];
    bool A = false, B = false, C = false;
    scanf("%s", S);
    for(char ch : S){
        if(ch == 'a') A = true;
        if(ch == 'b') B = true;
        if(ch == 'c') C = true;
    }
    if(A && B && C) cout << "Yes" << endl;
    else cout << "No" << endl;
}