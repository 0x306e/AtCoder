#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
typedef long long ll;
int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};
vector<string> s = {};
int H, W;

bool chk(int x, int y){
    if(
        s[std::max(0, x-1)][y] == '#' ||
        s[std::min(H-1, x+1)][y] == '#' ||
        s[x][std::max(0, y-1)] == '#' ||
        s[x][std::min(W-1, y+1)] == '#'
    ) return true;
    return false;
}

int main(int argc, char* argv[]){
    string temp;
    cin >> H >> W;
    rep(i, H){
        cin >> temp;
        s.push_back(temp);
    }
    rep(i, H){
        rep(j, W){
            if(s[i][j] == '#'){
                if(!chk(i, j)){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}