#include "bits/stdc++.h"
using namespace std;

int main(int argc, char* argv[]){
    char c[3][3];
    for(int i = 0; i < 3; i++){
        scanf("%s", c[i]);
    }
    cout << c[0][0] << c[1][1] << c[2][2] << endl;
    return 0;
}