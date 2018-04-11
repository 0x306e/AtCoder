#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int N, temp;
    vector<int> d;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> temp;
        d.push_back(temp);
    }
    sort(d.begin(), d.end());
    d.erase(unique(d.begin(), d.end()), d.end());
    cout << d.size() << endl;
}