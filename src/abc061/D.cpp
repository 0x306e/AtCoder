#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const ll INF = 1LL << 50;

int main(int argc, char *argv[]) {
  ll n, m;
  ll a[2001] = {}, b[2001] = {}, c[2001] = {};
  cin >> n >> m;
  rep(i, m) {
    cin >> a[i] >> b[i] >> c[i];
    c[i] = -c[i];
  }

  ll distance[2001] = {};
  rep(i, 2001) distance[i] = INF;
  distance[0] = 0;

  rep(i, n-1) {
    rep(j, m) {
      if (distance[a[j] - 1] == INF)
        continue;
      if (distance[b[j] - 1] > distance[a[j] - 1] + c[j]) {
        distance[b[j] - 1] = distance[a[j] - 1] + c[j];
      }
    }
  }
  ll ans = distance[n - 1];

  bool negative[2001] = {};
  rep(i, 2001) negative[i] = false;
  rep(i, n) {
    rep(j, m) {
      if (distance[a[j] - 1] == INF)
        continue;
      if (distance[b[j] - 1] > distance[a[j] - 1] + c[j]) {
        distance[b[j] - 1] = distance[a[j] - 1] + c[j];
        negative[b[j] - 1] = true;
      }
      if (negative[a[j] - 1] == true)
        negative[b[j] - 1] = true;
    }
  }

  if (negative[n - 1])
    cout << "inf" << endl;
  else
    cout << -ans << endl;
}
