#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int a, b, sum;
    cin >> a >> b;
    if(b>=100) sum = a*1000 + b;
    else if(b>=10) sum = a*100 + b;
    else sum = a*10 + b;
    for(int i = 1; i*i <= sum; i++){
        if(i*i == sum){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}