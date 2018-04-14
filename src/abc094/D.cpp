#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, tmp, max = 0;
    bool exist[1000000001] = {};
    vector<int> a;
    queue<int> q;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        a.push_back(tmp);
        max = std::max(tmp, max);
        exist[tmp] = true;
    }
    sort(a.begin(), a.end());

    q.push(max/2);
    while(tmp <= max){
        tmp = q.front();
        if(exist[tmp] && tmp != max) break;
        else {
            if(tmp == max/2) {
                q.push(tmp + 1);
                q.push(tmp - 1);
            }
            else if(tmp < max/2) q.push(tmp-1);
            else q.push(tmp+1);
        }
        q.pop();
    }
    cout << max << ' ' << tmp << endl;
}